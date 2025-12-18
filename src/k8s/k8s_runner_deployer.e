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
			create k8s_client.make_with_kubeconfig
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
			l_service: SERVICE_SPEC
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
					k8s_client.create_deployment (l_deployment, namespace)

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
		do
			last_error.wipe_out
			k8s_client.scale_deployment (runner_deployment_name, namespace, a_count)
			if k8s_client.has_error then
				last_error := "Failed to scale: " + k8s_client.error_message
			end
		end

	remove_runner: BOOLEAN
			-- Remove runner deployment from Kubernetes.
		do
			last_error.wipe_out

			-- Delete deployment
			k8s_client.delete_deployment (runner_deployment_name, namespace)

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
			l_deployment: detachable K8S_DEPLOYMENT
		do
			l_deployment := k8s_client.get_deployment (runner_deployment_name, namespace)
			if l_deployment /= Void then
				Result := [
					l_deployment.ready_replicas,
					l_deployment.replicas,
					l_deployment.status_message
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
			l_namespaces: ARRAYED_LIST [K8S_NAMESPACE]
			l_exists: BOOLEAN
		do
			l_namespaces := k8s_client.namespaces
			l_exists := across l_namespaces as ic some ic.item.name.same_string (namespace) end

			if not l_exists then
				k8s_client.create_namespace (namespace)
				if k8s_client.has_error then
					last_error := "Failed to create namespace: " + k8s_client.error_message
				end
			end
		end

	create_runner_deployment (a_token: RUNNER_REGISTRATION_TOKEN): DEPLOYMENT_SPEC
			-- Create Kubernetes deployment spec for runner.
		local
			l_labels_string: STRING
			l_github_url: STRING
		do
			-- Build labels string for runner
			create l_labels_string.make_empty
			across config.runner_labels as ic loop
				if not l_labels_string.is_empty then
					l_labels_string.append (",")
				end
				l_labels_string.append (ic.item)
			end

			-- Build GitHub URL
			if config.is_repository_scope then
				l_github_url := "https://github.com/" + config.owner + "/" + config.repository
			else
				l_github_url := "https://github.com/" + config.owner
			end

			create Result.make
			Result.set_name (runner_deployment_name)
			Result.set_replicas (1)
			Result.set_image (config.runner_image)

			-- Runner configuration via environment variables
			Result.add_env ("RUNNER_NAME", config.runner_name)
			Result.add_env ("RUNNER_TOKEN", a_token.token)
			Result.add_env ("RUNNER_URL", l_github_url)
			Result.add_env ("RUNNER_LABELS", l_labels_string)
			Result.add_env ("RUNNER_GROUP", config.runner_group)

			-- Resource limits
			Result.set_resources ("500m", "2000m", "1Gi", "4Gi")

			-- Labels for the deployment
			Result.add_label ("app", "github-runner")
			Result.add_label ("runner-name", config.runner_name)

			-- Selector
			Result.add_match_label ("app", "github-runner")
			Result.add_match_label ("runner-name", config.runner_name)
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
				l_builder.add_deployment (l_deployment, namespace)
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
