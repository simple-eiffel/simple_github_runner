# 7S-04: SIMPLE-STAR - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Ecosystem Integration

### Dependencies Used

| Library | Purpose |
|---------|---------|
| simple_http | GitHub API calls |
| simple_json | JSON parsing |
| simple_k8s | Kubernetes deployment |

### Related Libraries

| Library | Potential Use |
|---------|---------------|
| simple_env | Token from environment |
| simple_config | Runner configuration |

## API Consistency

### Naming Conventions
- Classes: Descriptive names (GITHUB_RUNNER_API, K8S_RUNNER_DEPLOYER)
- Config: GITHUB_RUNNER_CONFIG
- Quick API: GITHUB_RUNNER_QUICK (facade)

### Error Handling Pattern
```eiffel
-- Consistent with ecosystem
has_error: BOOLEAN
last_error: STRING

-- Usage
if deployer.has_error then
    print (deployer.last_error)
end
```

### Creation Pattern
```eiffel
-- Quick one-liner
runner: GITHUB_RUNNER_QUICK
create runner.make_for_repository ("owner", "repo", token)
runner.deploy

-- Or with configuration
create runner.make_for_organization ("org", token)
runner.set_name ("eiffel-runner").set_image ("myimage").add_label ("custom")
runner.deploy
```

## Ecosystem Patterns Applied

### Facade Pattern
GITHUB_RUNNER_QUICK wraps complex operations:
- Token acquisition
- Kubernetes deployment
- Configuration management

### Builder-style Configuration
```eiffel
runner.set_name ("name")
      .set_image ("image")
      .add_label ("label")
      .set_namespace ("ns")
```

### Dual Scope Support
- make_for_repository (owner, repo, token)
- make_for_organization (org, token)
