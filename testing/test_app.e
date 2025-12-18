note
	description: "Test application for simple_github_runner"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_APP

create
	make

feature {NONE} -- Initialization

	make
			-- Run tests.
		do
			print ("=== simple_github_runner Tests ===%N%N")

			run_config_tests
			run_token_tests
			-- API tests require real credentials
			-- run_api_tests

			print ("%N=== Results: " + passed.out + " passed, " + failed.out + " failed ===%N")
			if failed = 0 then
				print ("ALL TESTS PASSED%N")
			end
		end

feature -- Tests

	run_config_tests
			-- Test GITHUB_RUNNER_CONFIG.
		local
			l_config: GITHUB_RUNNER_CONFIG
		do
			print ("GITHUB_RUNNER_CONFIG Tests:%N")

			-- Test repository scope
			create l_config.make_for_repository ("simple-eiffel", "simple_k8s", "ghp_test123")
			assert ("repo_scope", l_config.is_repository_scope)
			assert ("has_owner", l_config.owner.same_string ("simple-eiffel"))
			assert ("has_repo", l_config.repository.same_string ("simple_k8s"))
			assert ("is_valid", l_config.is_valid)
			assert ("reg_url_contains_repo", l_config.registration_token_url.has_substring ("repos"))

			-- Test organization scope
			create l_config.make_for_organization ("simple-eiffel", "ghp_test456")
			assert ("org_scope", l_config.is_organization_scope)
			assert ("org_url_contains_orgs", l_config.registration_token_url.has_substring ("orgs"))

			-- Test labels (check counts - default is 2: self-hosted, eiffel)
			create l_config.make
			assert ("default_labels_count", l_config.runner_labels.count = 2)
			l_config.add_label ("linux")
			assert ("after_linux_count", l_config.runner_labels.count = 3)
			l_config.add_label ("x64")
			assert ("after_x64_count", l_config.runner_labels.count = 4)

			-- Test validation
			create l_config.make
			assert ("empty_invalid", not l_config.is_valid)
		end

	run_token_tests
			-- Test RUNNER_REGISTRATION_TOKEN.
		local
			l_token: RUNNER_REGISTRATION_TOKEN
			l_json: SIMPLE_JSON_OBJECT
			l_future: DATE_TIME
		do
			print ("%NRUNNER_REGISTRATION_TOKEN Tests:%N")

			-- Test direct creation
			create l_future.make_now
			l_future.hour_add (1)
			create l_token.make ("AABCDEF123456", l_future)
			assert ("token_valid", l_token.is_valid)
			assert ("not_expired", not l_token.is_expired)
			assert ("time_remaining_positive", l_token.time_remaining > 0)

			-- Test JSON parsing (fluent API)
			l_json := (create {SIMPLE_JSON_OBJECT}.make).put_string ("GHTOKEN123", "token").put_string ("2099-12-31T23:59:59Z", "expires_at")
			create l_token.make_from_json (l_json)
			assert ("json_token_valid", l_token.is_valid)
			assert ("json_token_value", l_token.token.same_string ("GHTOKEN123"))

			-- Test expired token (fluent API)
			l_json := (create {SIMPLE_JSON_OBJECT}.make).put_string ("EXPIRED", "token").put_string ("2020-01-01T00:00:00Z", "expires_at")
			create l_token.make_from_json (l_json)
			assert ("expired_token", l_token.is_expired)
			assert ("expired_invalid", not l_token.is_valid)

			-- Test runner args
			create l_future.make_now
			l_future.hour_add (1)
			create l_token.make ("TESTTOKEN", l_future)
			assert ("runner_args", l_token.to_runner_args.same_string ("--token TESTTOKEN"))
		end

feature {NONE} -- Test Infrastructure

	passed: INTEGER
	failed: INTEGER

	assert (a_name: STRING; a_condition: BOOLEAN)
			-- Assert condition with name.
		do
			if a_condition then
				print ("  " + a_name + ": PASSED%N")
				passed := passed + 1
			else
				print ("  " + a_name + ": FAILED%N")
				failed := failed + 1
			end
		end

end
