# S03: CONTRACTS - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## GITHUB_RUNNER_CONFIG Contracts

### Invariants
```eiffel
invariant
    scope_valid: scope_type = Scope_repository or scope_type = Scope_organization
    labels_not_void: runner_labels /= Void
```

### Creation Contracts

#### make_for_repository
```eiffel
require
    owner_not_empty: not a_owner.is_empty
    repo_not_empty: not a_repo.is_empty
    token_not_empty: not a_token.is_empty
ensure
    is_repository_scope: is_repository_scope
```

#### make_for_organization
```eiffel
require
    org_not_empty: not a_org.is_empty
    token_not_empty: not a_token.is_empty
ensure
    is_organization_scope: is_organization_scope
```

### Modification Contracts

#### set_runner_name
```eiffel
require
    name_not_empty: not a_name.is_empty
ensure
    name_set: runner_name.same_string (a_name)
```

#### add_label
```eiffel
require
    label_not_empty: not a_label.is_empty
ensure
    has_label: runner_labels.has (a_label)
```

---

## GITHUB_RUNNER_API Contracts

### Invariant
```eiffel
invariant
    config_not_void: config /= Void
```

### Feature Contracts

#### make
```eiffel
require
    config_valid: a_config.is_valid
ensure
    config_set: config = a_config
```

#### delete_runner
```eiffel
require
    valid_id: a_runner_id > 0
```

---

## K8S_RUNNER_DEPLOYER Contracts

### Invariants
```eiffel
invariant
    config_not_void: config /= Void
    k8s_client_not_void: k8s_client /= Void
    github_api_not_void: github_api /= Void
```

### Feature Contracts

#### make
```eiffel
require
    config_valid: a_config.is_valid
ensure
    config_set: config = a_config
```

#### scale_runners
```eiffel
require
    count_valid: a_count >= 0
```

#### set_namespace
```eiffel
require
    namespace_not_empty: not a_namespace.is_empty
ensure
    namespace_set: namespace.same_string (a_namespace)
```

---

## RUNNER_REGISTRATION_TOKEN Contracts

### Invariants
```eiffel
invariant
    token_not_void: token /= Void
    expires_not_void: expires_at /= Void
```

### Creation Contracts

#### make
```eiffel
require
    token_not_empty: not a_token.is_empty
ensure
    token_set: token.same_string (a_token)
    expires_set: expires_at = a_expires_at
```

---

## GITHUB_RUNNER_QUICK Contracts

### Invariants
```eiffel
invariant
    config_not_void: config /= Void
    deployer_not_void: deployer /= Void
```

### Creation Contracts

#### make_for_repository
```eiffel
require
    owner_not_empty: not a_owner.is_empty
    repo_not_empty: not a_repo.is_empty
    token_not_empty: not a_token.is_empty
```

### Feature Contracts

#### scale
```eiffel
require
    count_valid: a_count >= 0
```
