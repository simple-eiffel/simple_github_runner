# S06: BOUNDARIES - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## System Boundaries

### External Systems

```
+-------------------+
|   Application     |
+-------------------+
         |
         | Eiffel API
         v
+-------------------+
| simple_github_    |
| runner            |
+-------------------+
    |           |
    v           v
+-------+   +-------+
| GitHub|   | K8S   |
| API   |   | API   |
+-------+   +-------+
```

### Internal Boundaries

```
+----------------------------------------------------------------+
|                    simple_github_runner                         |
|                                                                |
|  +----------------------+                                      |
|  | GITHUB_RUNNER_QUICK  |  <-- Facade API                     |
|  +----------------------+                                      |
|           |                                                    |
|           v                                                    |
|  +----------------------+     +--------------------+           |
|  | GITHUB_RUNNER_CONFIG |     | K8S_RUNNER_DEPLOYER|           |
|  +----------------------+     +--------------------+           |
|                                       |                        |
|                                       v                        |
|                              +------------------+              |
|                              | GITHUB_RUNNER_API|              |
|                              +------------------+              |
|                                       |                        |
|                                       v                        |
|                              +----------------------+          |
|                              | RUNNER_REGISTRATION_ |          |
|                              | TOKEN                |          |
|                              +----------------------+          |
+----------------------------------------------------------------+
```

## Interface Boundaries

### Public API (GITHUB_RUNNER_QUICK)

```eiffel
-- One-liner operations
deploy: BOOLEAN
remove: BOOLEAN
scale (count: INTEGER)
status: STRING
yaml: STRING

-- Builder configuration
set_name (name): like Current
set_image (image): like Current
add_label (label): like Current
set_namespace (ns): like Current
```

### Configuration API (GITHUB_RUNNER_CONFIG)

```eiffel
-- Setup
make_for_repository (owner, repo, token)
make_for_organization (org, token)

-- Customization
set_runner_name (name)
set_runner_image (image)
add_label (label)
```

### Low-level API (GITHUB_RUNNER_API)

```eiffel
-- Token management
get_registration_token: TOKEN
get_removal_token: STRING

-- Runner management
list_runners: LIST
delete_runner (id)
runner_exists (name): BOOLEAN
```

## Data Flow

### Deployment Flow
```
Application
    |
    | quick.deploy
    v
GITHUB_RUNNER_QUICK
    |
    | deployer.deploy_runner
    v
K8S_RUNNER_DEPLOYER
    |
    +-- github_api.get_registration_token
    |       |
    |       v
    |   RUNNER_REGISTRATION_TOKEN
    |
    +-- k8s_client.create_deployment
    |
    v
Kubernetes Deployment Created
```

### Status Flow
```
Application
    |
    | quick.status
    v
GITHUB_RUNNER_QUICK
    |
    | deployer.get_runner_status
    v
K8S_RUNNER_DEPLOYER
    |
    | k8s_client.get_deployment
    v
Status string returned
```
