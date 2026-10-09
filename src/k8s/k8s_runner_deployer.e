note
	description: "Deploy GitHub Actions runners to Kubernetes using simple_k8s"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	K8S_RUNNER_DEPLOYER

create
	make

feature {NONE} -- Initialization

	make (a_config: GITHUB_RUNNER_CONFIG)
			-- Initialize deployer with runner configuration.
		require
			config_valid: a_config.is_valid
		do
			config := a_config
			create k8s_client.make
			create github_api.make (a_config)
			namespace := "github-runners"
			create last_error.make_empty
		ensure
			config_set: config = a_config
		end

feature -- Access

	config: GITHUB_RUNNER_CONFIG
			-- Runner configuration.

	namespace: STRING
			-- Kubernetes namespace for runners.

	last_error: STRING
			-- Last error message.

	has_error: BOOLEAN
			-- Did last operation fail?
		do
			Result := not last_error.is_empty
		end

feature -- Configuration

	set_namespace (a_namespace: STRING)
			-- Set Kubernetes namespace for runner deployment.
		require
			namespace_not_empty: not a_namespace.is_empty
		do
			namespace := a_namespace
		ensure
			namespace_set: namespace.same_string (a_namespace)
		end

feature -- Deployment

	deploy_runner: BOOLEAN
			-- Deploy a new runner to Kubernetes.
			-- Returns True on success.
		local
			l_token: detachable RUNNER_REGISTRATION_TOKEN
			l_deployment: DEPLOYMENT_SPEC
			l_created: detachable STRING
		do
			last_error.wipe_out

			-- Step 1: Get registration token from GitHub
			l_token := github_api.get_registration_token
			if l_token = Void or else not l_token.is_valid then
				last_error := "Failed to get registration token: " + github_api.last_error
				Result := False
			else
				-- Step 2: Create namespace if needed
				ensure_namespace_exists

				if not has_error then
					-- Step 3: Create runner deployment
					l_deployment := create_runner_deployment (l_token)
					l_created := k8s_client.create_deployment (l_deployment)

					if k8s_client.has_error then
						last_error := "Failed to create deployment: " + k8s_client.error_message
					else
						Result := True
					end
				end
			end
		end

	scale_runners (a_count: INTEGER)
			-- Scale runner deployment to specified count.
		require
			count_valid: a_count >= 0
		local
			l_scaled: BOOLEAN
		do
			last_error.wipe_out
			l_scaled := k8s_client.scale_deployment (runner_deployment_name, namespace, a_count)
			if k8s_client.has_error then
				last_error := "Failed to scale: " + k8s_client.error_message
			end
		end

	remove_runner: BOOLEAN
			-- Remove runner deployment from Kubernetes.
		local
			l_deleted: BOOLEAN
		do
			last_error.wipe_out

			-- Delete deployment
			l_deleted := k8s_client.delete_deployment (runner_deployment_name, namespace)

			if k8s_client.has_error then
				last_error := "Failed to delete deployment: " + k8s_client.error_message
				Result := False
			else
				Result := True
			end
		end

	get_runner_status: detachable TUPLE [ready: INTEGER; total: INTEGER; status: STRING]
			-- Get current runner deployment status.
		local
			l_json: detachable STRING
			l_deployment: K8S_DEPLOYMENT
			l_status: STRING
		do
			l_json := k8s_client.get_deployment (runner_deployment_name, namespace)
			if l_json /= Void and then not l_json.is_empty then
				create l_deployment.make_from_json (l_json)
				if l_deployment.is_complete then
					l_status := "Ready"
				elseif l_deployment.is_progressing then
					l_status := "Progressing"
				else
					l_status := "Degraded"
				end
				Result := [
					l_deployment.ready_replicas,
					l_deployment.replicas,
					l_status
				]
			end
		end

feature {NONE} -- Implementation

	k8s_client: K8S_CLIENT
			-- Kubernetes client.

	github_api: GITHUB_RUNNER_API
			-- GitHub API client.

	runner_deployment_name: STRING
			-- Name for runner deployment.
		do
			Result := config.runner_name + "-deployment"
		end

	ensure_namespace_exists
			-- Create namespace if it doesn't exist.
		local
			l_exists: BOOLEAN
			l_created: detachable STRING
		do
			l_exists := namespace_exists (namespace)

			if not l_exists then
				l_created := k8s_client.post_resource ("/api/v1/namespaces",
					"{%"apiVersion%":%"v1%",%"kind%":%"Namespace%",%"metadata%":{%"name%":%"" + namespace + "%"}}")
				if k8s_client.has_error then
					last_error := "Failed to create namespace: " + k8s_client.error_message
				end
			end
		end

	namespace_exists (a_name: STRING): BOOLEAN
			-- Does namespace `a_name' exist in the cluster?
		local
			l_index: INTEGER
		do
			if attached k8s_client.list_namespaces as l_json and then not l_json.is_empty then
				if attached {SIMPLE_JSON_OBJECT} json_parser.parse (l_json) as l_root and then
					attached l_root.array_item ("items") as l_items
				then
					from
						l_index := 1
					until
						l_index > l_items.count or Result
					loop
						if attached l_items.object_item (l_index) as l_item and then
							attached l_item.object_item ("metadata") as l_metadata and then
							attached l_metadata.string_item ("name") as l_name
						then
							Result := l_name.same_string (a_name)
						end
						l_index := l_index + 1
					end
				end
			end
		end

	json_parser: SIMPLE_JSON
			-- JSON parser.
		once
			create Result
		end

	create_runner_deployment (a_token: RUNNER_REGISTRATION_TOKEN): DEPLOYMENT_SPEC
			-- Create Kubernetes deployment spec for runner.
		local
			l_labels_string: STRING
			l_github_url: STRING
			l_spec: DEPLOYMENT_SPEC
		do
			-- Build labels string for runner
			create l_labels_string.make_empty
			across config.runner_labels as ic loop
				if not l_labels_string.is_empty then
					l_labels_string.append (",")
				end
				l_labels_string.append (ic)
			end

			-- Build GitHub URL
			if config.is_repository_scope then
				l_github_url := "https://github.com/" + config.owner + "/" + config.repository
			else
				l_github_url := "https://github.com/" + config.owner
			end

			create Result.make
			Result.name := runner_deployment_name
			Result.image := config.runner_image

			-- The fluent setters return `Result' itself, so chain them.
			l_spec := Result.set_namespace (namespace)
				.set_replicas (1)
				-- Runner configuration via environment variables
				.add_env ("RUNNER_NAME", config.runner_name)
				.add_env ("RUNNER_TOKEN", a_token.token)
				.add_env ("RUNNER_URL", l_github_url)
				.add_env ("RUNNER_LABELS", l_labels_string)
				.add_env ("RUNNER_GROUP", config.runner_group)
				-- Resource limits
				.set_resources ("500m", "2000m", "1Gi", "4Gi")
				-- Labels for the deployment
				.add_label ("app", "github-runner")
				.add_label ("runner-name", config.runner_name)
				-- Selector
				.add_selector ("app", "github-runner")
				.add_selector ("runner-name", config.runner_name)
		end

feature -- YAML Generation

	generate_deployment_yaml: STRING
			-- Generate deployment YAML for manual review/apply.
		local
			l_builder: MANIFEST_BUILDER
			l_deployment: DEPLOYMENT_SPEC
			l_token: detachable RUNNER_REGISTRATION_TOKEN
		do
			l_token := github_api.get_registration_token
			if l_token /= Void then
				l_deployment := create_runner_deployment (l_token)
				create l_builder.make
				l_builder.add_json (l_deployment.to_json)
				Result := l_builder.to_yaml
			else
				Result := "# Error: Could not get registration token"
			end
		end

invariant
	config_not_void: config /= Void
	k8s_client_not_void: k8s_client /= Void
	github_api_not_void: github_api /= Void

end
