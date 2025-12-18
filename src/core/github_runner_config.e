note
	description: "Configuration for GitHub Actions self-hosted runner"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	GITHUB_RUNNER_CONFIG

create
	make,
	make_for_repository,
	make_for_organization

feature {NONE} -- Initialization

	make
			-- Create empty configuration (defaults to repository scope).
		do
			create runner_labels.make (5)
			runner_labels.extend ("self-hosted")
			runner_labels.extend ("eiffel")
			runner_name := "eiffel-runner"
			runner_image := "simple-eiffel/eiffelstudio:25.02"
			runner_group := "Default"
			scope_type := Scope_repository  -- Default scope
		end

	make_for_repository (a_owner, a_repo, a_token: STRING)
			-- Create configuration for repository-level runner.
		require
			owner_not_empty: not a_owner.is_empty
			repo_not_empty: not a_repo.is_empty
			token_not_empty: not a_token.is_empty
		do
			make
			scope_type := Scope_repository
			owner := a_owner
			repository := a_repo
			personal_access_token := a_token
		ensure
			is_repository_scope: is_repository_scope
		end

	make_for_organization (a_org, a_token: STRING)
			-- Create configuration for organization-level runner.
		require
			org_not_empty: not a_org.is_empty
			token_not_empty: not a_token.is_empty
		do
			make
			scope_type := Scope_organization
			owner := a_org
			personal_access_token := a_token
		ensure
			is_organization_scope: is_organization_scope
		end

feature -- Access

	owner: STRING
			-- Repository owner or organization name.
		attribute
			create Result.make_empty
		end

	repository: STRING
			-- Repository name (for repository-scoped runners).
		attribute
			create Result.make_empty
		end

	personal_access_token: STRING
			-- GitHub Personal Access Token with admin:org or repo scope.
		attribute
			create Result.make_empty
		end

	runner_name: STRING
			-- Name for the runner.

	runner_labels: ARRAYED_LIST [STRING]
			-- Labels to assign to runner.

	runner_group: STRING
			-- Runner group (Default for repository runners).

	runner_image: STRING
			-- Docker image for runner container.

feature -- Scope

	scope_type: INTEGER
			-- Scope type (repository or organization).

	Scope_repository: INTEGER = 1
	Scope_organization: INTEGER = 2

	is_repository_scope: BOOLEAN
			-- Is this a repository-scoped runner?
		do
			Result := scope_type = Scope_repository
		end

	is_organization_scope: BOOLEAN
			-- Is this an organization-scoped runner?
		do
			Result := scope_type = Scope_organization
		end

feature -- API URLs

	api_base_url: STRING = "https://api.github.com"

	registration_token_url: STRING
			-- URL to get runner registration token.
		do
			if is_repository_scope then
				Result := api_base_url + "/repos/" + owner + "/" + repository + "/actions/runners/registration-token"
			else
				Result := api_base_url + "/orgs/" + owner + "/actions/runners/registration-token"
			end
		end

	runners_url: STRING
			-- URL to list/manage runners.
		do
			if is_repository_scope then
				Result := api_base_url + "/repos/" + owner + "/" + repository + "/actions/runners"
			else
				Result := api_base_url + "/orgs/" + owner + "/actions/runners"
			end
		end

	remove_token_url: STRING
			-- URL to get runner removal token.
		do
			if is_repository_scope then
				Result := api_base_url + "/repos/" + owner + "/" + repository + "/actions/runners/remove-token"
			else
				Result := api_base_url + "/orgs/" + owner + "/actions/runners/remove-token"
			end
		end

feature -- Modification

	set_runner_name (a_name: STRING)
			-- Set runner name.
		require
			name_not_empty: not a_name.is_empty
		do
			runner_name := a_name
		ensure
			name_set: runner_name.same_string (a_name)
		end

	set_runner_image (a_image: STRING)
			-- Set Docker image for runner.
		require
			image_not_empty: not a_image.is_empty
		do
			runner_image := a_image
		ensure
			image_set: runner_image.same_string (a_image)
		end

	add_label (a_label: STRING)
			-- Add a label to runner.
		require
			label_not_empty: not a_label.is_empty
		do
			if not runner_labels.has (a_label) then
				runner_labels.extend (a_label)
			end
		ensure
			has_label: runner_labels.has (a_label)
		end

	set_runner_group (a_group: STRING)
			-- Set runner group.
		require
			group_not_empty: not a_group.is_empty
		do
			runner_group := a_group
		end

feature -- Validation

	is_valid: BOOLEAN
			-- Is configuration valid?
		do
			Result := not owner.is_empty and
					  not personal_access_token.is_empty and
					  (is_repository_scope implies not repository.is_empty) and
					  not runner_name.is_empty and
					  not runner_image.is_empty
		end

invariant
	scope_valid: scope_type = Scope_repository or scope_type = Scope_organization
	labels_not_void: runner_labels /= Void

end
