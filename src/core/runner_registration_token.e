note
	description: "GitHub Actions runner registration token"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	RUNNER_REGISTRATION_TOKEN

create
	make,
	make_from_json

feature {NONE} -- Initialization

	make (a_token: STRING; a_expires_at: DATE_TIME)
			-- Create with token and expiration.
		require
			token_not_empty: not a_token.is_empty
		do
			token := a_token
			expires_at := a_expires_at
		ensure
			token_set: token.same_string (a_token)
			expires_set: expires_at = a_expires_at
		end

	make_from_json (a_json: SIMPLE_JSON_OBJECT)
			-- Create from GitHub API JSON response.
		local
			l_expires_string: STRING
		do
			if attached a_json.item ("token") as l_token then
				token := l_token.string_value.to_string_8
			else
				create token.make_empty
			end

			-- Parse ISO 8601 date: "2025-12-18T19:30:00Z"
			if attached a_json.item ("expires_at") as l_expires then
				l_expires_string := l_expires.string_value.to_string_8
				expires_at := parse_iso_date (l_expires_string)
			else
				create expires_at.make_now
			end
		end

feature -- Access

	token: STRING
			-- Registration token value.
			-- Pass this to the runner with --token flag.

	expires_at: DATE_TIME
			-- Token expiration time (typically 1 hour from creation).

feature -- Status

	is_valid: BOOLEAN
			-- Is the token non-empty and not expired?
		do
			Result := not token.is_empty and then not is_expired
		end

	is_expired: BOOLEAN
			-- Has the token expired?
		local
			l_now: DATE_TIME
		do
			create l_now.make_now
			Result := l_now > expires_at
		end

	time_remaining: INTEGER
			-- Seconds until expiration.
		local
			l_now: DATE_TIME
			l_duration: DATE_TIME_DURATION
		do
			create l_now.make_now
			l_duration := expires_at.relative_duration (l_now)
			Result := l_duration.seconds_count.as_integer_32
			if Result < 0 then
				Result := 0
			end
		end

feature -- Output

	to_runner_args: STRING
			-- Format token for runner command line.
		do
			Result := "--token " + token
		end

feature {NONE} -- Implementation

	parse_iso_date (a_iso_string: STRING): DATE_TIME
			-- Parse ISO 8601 date string.
			-- Format: "2025-12-18T19:30:00Z"
		local
			l_year, l_month, l_day: INTEGER
			l_hour, l_minute, l_second: INTEGER
		do
			-- Simple parsing for ISO 8601 format
			if a_iso_string.count >= 19 then
				l_year := a_iso_string.substring (1, 4).to_integer
				l_month := a_iso_string.substring (6, 7).to_integer
				l_day := a_iso_string.substring (9, 10).to_integer
				l_hour := a_iso_string.substring (12, 13).to_integer
				l_minute := a_iso_string.substring (15, 16).to_integer
				l_second := a_iso_string.substring (18, 19).to_integer
				create Result.make (l_year, l_month, l_day, l_hour, l_minute, l_second)
			else
				create Result.make_now
			end
		end

invariant
	token_not_void: token /= Void
	expires_not_void: expires_at /= Void

end
