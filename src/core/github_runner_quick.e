note
	description: "One-liner convenience API for GitHub runner deployment"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	GITHUB_RUNNER_QUICK

create
	make_for_repository,
	make_for_organization

feature {NONE} -- Initialization

	make_for_repository (a_owner, a_repo, a_token: STRING)
			-- Initialize for repository-level runner.
		require
			owner_not_empty: not a_owner.is_empty
			repo_not_empty: not a_repo.is_empty
			token_not_empty: not a_token.is_empty
		do
			create config.make_for_repository (a_owner, a_repo, a_token)
			create deployer.make (config)
		end

	make_for_organization (a_org, a_token: STRING)
			-- Initialize for organization-level runner.
		require
			org_not_empty: not a_org.is_empty
			token_not_empty: not a_token.is_empty
		do
			create config.make_for_organization (a_org, a_token)
			create deployer.make (config)
		end

feature -- Quick Commands

	deploy: BOOLEAN
			-- Deploy runner to K8S.
			-- Like: kubectl apply -f runner.yaml
		do
			Result := deployer.deploy_runner
		end

	remove: BOOLEAN
			-- Remove runner from K8S.
			-- Like: kubectl delete deployment runner
		do
			Result := deployer.remove_runner
		end

	scale (a_count: INTEGER)
			-- Scale runner to N replicas.
			-- Like: kubectl scale deployment runner --replicas=N
		require
			count_valid: a_count >= 0
		do
			deployer.scale_runners (a_count)
		end

	status: STRING
			-- Get runner status.
			-- Like: kubectl get deployment runner
		local
			l_status: detachable TUPLE [ready: INTEGER; total: INTEGER; status: STRING]
		do
			l_status := deployer.get_runner_status
			if l_status /= Void then
				Result := "Ready: " + l_status.ready.out + "/" + l_status.total.out + " - " + l_status.status
			else
				Result := "Runner not deployed"
			end
		end

	yaml: STRING
			-- Generate deployment YAML.
		do
			Result := deployer.generate_deployment_yaml
		end

feature -- Configuration

	set_name (a_name: STRING): like Current
			-- Set runner name.
		require
			name_not_empty: not a_name.is_empty
		do
			config.set_runner_name (a_name)
			Result := Current
		end

	set_image (a_image: STRING): like Current
			-- Set Docker image.
		require
			image_not_empty: not a_image.is_empty
		do
			config.set_runner_image (a_image)
			Result := Current
		end

	add_label (a_label: STRING): like Current
			-- Add runner label.
		require
			label_not_empty: not a_label.is_empty
		do
			config.add_label (a_label)
			Result := Current
		end

	set_namespace (a_namespace: STRING): like Current
			-- Set K8S namespace.
		require
			namespace_not_empty: not a_namespace.is_empty
		do
			deployer.set_namespace (a_namespace)
			Result := Current
		end

feature -- Error Handling

	has_error: BOOLEAN
			-- Did last operation fail?
		do
			Result := deployer.has_error
		end

	last_error: STRING
			-- Last error message.
		do
			Result := deployer.last_error
		end

feature {NONE} -- Implementation

	config: GITHUB_RUNNER_CONFIG
			-- Runner configuration.

	deployer: K8S_RUNNER_DEPLOYER
			-- K8S deployer.

invariant
	config_not_void: config /= Void
	deployer_not_void: deployer /= Void

end
