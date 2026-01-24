# S02: CLASS CATALOG - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Class Hierarchy

```
ANY
    +-- GITHUB_RUNNER_CONFIG     # Configuration holder
    +-- GITHUB_RUNNER_API        # GitHub API client
    +-- GITHUB_RUNNER_QUICK      # Quick facade
    +-- RUNNER_REGISTRATION_TOKEN # Token data
    +-- K8S_RUNNER_DEPLOYER      # K8S deployment
```

## Class Details

### GITHUB_RUNNER_CONFIG

**Purpose:** Store runner configuration
**Responsibility:** Hold settings for runner deployment

| Feature Category | Count |
|-----------------|-------|
| Access | 7 |
| Scope | 4 |
| API URLs | 3 |
| Modification | 4 |
| Validation | 1 |

**Key Features:**
- owner, repository, personal_access_token
- runner_name, runner_labels, runner_group, runner_image
- is_repository_scope, is_organization_scope
- registration_token_url, runners_url, remove_token_url

---

### GITHUB_RUNNER_API

**Purpose:** Communicate with GitHub REST API
**Responsibility:** Token management, runner CRUD

| Feature Category | Count |
|-----------------|-------|
| Registration | 2 |
| Management | 4 |
| HTTP | 3 |
| JSON | 3 |

**Key Features:**
- get_registration_token, get_removal_token
- list_runners, delete_runner
- runner_exists, get_runner_id

---

### GITHUB_RUNNER_QUICK

**Purpose:** Simple one-liner API
**Responsibility:** Facade for common operations

| Feature Category | Count |
|-----------------|-------|
| Commands | 4 |
| Configuration | 4 |
| Error handling | 2 |

**Key Features:**
- deploy, remove, scale, status
- set_name, set_image, add_label, set_namespace

---

### RUNNER_REGISTRATION_TOKEN

**Purpose:** Hold registration token data
**Responsibility:** Token value and expiration

| Feature Category | Count |
|-----------------|-------|
| Access | 2 |
| Status | 3 |
| Output | 1 |

**Key Features:**
- token, expires_at
- is_valid, is_expired, time_remaining
- to_runner_args

---

### K8S_RUNNER_DEPLOYER

**Purpose:** Deploy runners to Kubernetes
**Responsibility:** K8S deployment lifecycle

| Feature Category | Count |
|-----------------|-------|
| Configuration | 2 |
| Deployment | 4 |
| YAML | 1 |

**Key Features:**
- deploy_runner, scale_runners, remove_runner
- get_runner_status
- generate_deployment_yaml
