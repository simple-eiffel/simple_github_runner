note
	description: "GitHub API client for Actions runner management"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	GITHUB_RUNNER_API

create
	make

feature {NONE} -- Initialization

	make (a_config: GITHUB_RUNNER_CONFIG)
			-- Initialize API client with configuration.
		require
			config_valid: a_config.is_valid
		do
			config := a_config
			create http.make
			create json.make
			create last_error.make_empty
		ensure
			config_set: config = a_config
		end

feature -- Access

	config: GITHUB_RUNNER_CONFIG
			-- Runner configuration.

	last_error: STRING
			-- Last error message.

	has_error: BOOLEAN
			-- Did last operation fail?
		do
			Result := not last_error.is_empty
		end

feature -- Runner Registration

	get_registration_token: detachable RUNNER_REGISTRATION_TOKEN
			-- Get a registration token from GitHub API.
			-- Token is valid for 1 hour.
		local
			l_response: STRING
			l_json_value: detachable SIMPLE_JSON_VALUE
		do
			last_error.wipe_out
			l_response := api_post (config.registration_token_url, "")

			if not has_error and then not l_response.is_empty then
				l_json_value := json.parse (l_response)
				if attached {SIMPLE_JSON_OBJECT} l_json_value as l_obj then
					create Result.make_from_json (l_obj)
				else
					last_error := "Invalid JSON response from GitHub API"
				end
			end
		end

	get_removal_token: detachable STRING
			-- Get a removal token for unregistering runner.
		local
			l_response: STRING
			l_json_value: detachable SIMPLE_JSON_VALUE
		do
			last_error.wipe_out
			l_response := api_post (config.remove_token_url, "")

			if not has_error and then not l_response.is_empty then
				l_json_value := json.parse (l_response)
				if attached {SIMPLE_JSON_OBJECT} l_json_value as l_obj then
					if attached l_obj.item ("token") as l_token then
						Result := l_token.string_value
					end
				end
			end
		end

feature -- Runner Management

	list_runners: ARRAYED_LIST [TUPLE [id: INTEGER; name: STRING; status: STRING; busy: BOOLEAN]]
			-- List all runners for repository/organization.
		local
			l_response: STRING
			l_json_value: detachable SIMPLE_JSON_VALUE
		do
			create Result.make (10)
			last_error.wipe_out
			l_response := api_get (config.runners_url)

			if not has_error and then not l_response.is_empty then
				l_json_value := json.parse (l_response)
				if attached {SIMPLE_JSON_OBJECT} l_json_value as l_obj then
					if attached {SIMPLE_JSON_ARRAY} l_obj.item ("runners") as l_runners then
						across l_runners as ic loop
							if attached {SIMPLE_JSON_OBJECT} ic.item as l_runner then
								Result.extend ([
									json_integer (l_runner, "id"),
									json_string (l_runner, "name"),
									json_string (l_runner, "status"),
									json_boolean (l_runner, "busy")
								])
							end
						end
					end
				end
			end
		end

	delete_runner (a_runner_id: INTEGER)
			-- Delete a runner by ID.
		require
			valid_id: a_runner_id > 0
		local
			l_url: STRING
		do
			last_error.wipe_out
			l_url := config.runners_url + "/" + a_runner_id.out
			api_delete (l_url)
		end

	runner_exists (a_name: STRING): BOOLEAN
			-- Does a runner with this name exist?
		local
			l_runners: like list_runners
		do
			l_runners := list_runners
			Result := across l_runners as ic some ic.item.name.same_string (a_name) end
		end

	get_runner_id (a_name: STRING): INTEGER
			-- Get runner ID by name. Returns 0 if not found.
		local
			l_runners: like list_runners
		do
			l_runners := list_runners
			across l_runners as ic loop
				if ic.item.name.same_string (a_name) then
					Result := ic.item.id
				end
			end
		end

feature {NONE} -- HTTP Operations

	api_get (a_url: STRING): STRING
			-- GET request to GitHub API.
		do
			Result := http.get (a_url, auth_headers)
			check_response
		end

	api_post (a_url, a_body: STRING): STRING
			-- POST request to GitHub API.
		do
			Result := http.post (a_url, a_body, auth_headers)
			check_response
		end

	api_delete (a_url: STRING)
			-- DELETE request to GitHub API.
		do
			http.delete (a_url, auth_headers)
			check_response
		end

	auth_headers: HASH_TABLE [STRING, STRING]
			-- Authentication headers for GitHub API.
		do
			create Result.make (4)
			Result.put ("Bearer " + config.personal_access_token, "Authorization")
			Result.put ("application/vnd.github+json", "Accept")
			Result.put ("2022-11-28", "X-GitHub-Api-Version")
			Result.put ("application/json", "Content-Type")
		end

	check_response
			-- Check HTTP response for errors.
		do
			if http.last_status >= 400 then
				last_error := "HTTP " + http.last_status.out + ": " + http.last_response
			end
		end

feature {NONE} -- JSON Helpers

	json_string (a_obj: SIMPLE_JSON_OBJECT; a_key: STRING): STRING
			-- Extract string from JSON object.
		do
			if attached a_obj.item (a_key) as l_val then
				Result := l_val.string_value
			else
				create Result.make_empty
			end
		end

	json_integer (a_obj: SIMPLE_JSON_OBJECT; a_key: STRING): INTEGER
			-- Extract integer from JSON object.
		do
			if attached a_obj.item (a_key) as l_val then
				Result := l_val.integer_value
			end
		end

	json_boolean (a_obj: SIMPLE_JSON_OBJECT; a_key: STRING): BOOLEAN
			-- Extract boolean from JSON object.
		do
			if attached a_obj.item (a_key) as l_val then
				Result := l_val.boolean_value
			end
		end

feature {NONE} -- Implementation

	http: SIMPLE_HTTP
			-- HTTP client.

	json: SIMPLE_JSON
			-- JSON parser.

invariant
	config_not_void: config /= Void

end
