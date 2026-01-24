# S04: FEATURE SPECS - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## GITHUB_RUNNER_CONFIG Features

### Access Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| owner | `: STRING` | Repo owner or org name |
| repository | `: STRING` | Repo name (for repo scope) |
| personal_access_token | `: STRING` | GitHub PAT |
| runner_name | `: STRING` | Runner identifier |
| runner_labels | `: ARRAYED_LIST [STRING]` | Labels list |
| runner_group | `: STRING` | Runner group |
| runner_image | `: STRING` | Docker image |

### Scope Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| scope_type | `: INTEGER` | Scope enum |
| is_repository_scope | `: BOOLEAN` | Repo-level |
| is_organization_scope | `: BOOLEAN` | Org-level |

### URL Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| registration_token_url | `: STRING` | Token endpoint |
| runners_url | `: STRING` | Runners endpoint |
| remove_token_url | `: STRING` | Removal endpoint |

### Modification Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| set_runner_name | `(name: STRING)` | Set name |
| set_runner_image | `(image: STRING)` | Set Docker image |
| add_label | `(label: STRING)` | Add label |
| set_runner_group | `(group: STRING)` | Set group |

---

## GITHUB_RUNNER_API Features

### Registration Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| get_registration_token | `: RUNNER_REGISTRATION_TOKEN` | Get reg token |
| get_removal_token | `: STRING` | Get removal token |

### Management Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| list_runners | `: ARRAYED_LIST [TUPLE]` | List all runners |
| delete_runner | `(id: INTEGER)` | Delete by ID |
| runner_exists | `(name: STRING): BOOLEAN` | Check exists |
| get_runner_id | `(name: STRING): INTEGER` | Get ID by name |

---

## GITHUB_RUNNER_QUICK Features

### Command Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| deploy | `: BOOLEAN` | Deploy to K8S |
| remove | `: BOOLEAN` | Remove from K8S |
| scale | `(count: INTEGER)` | Scale replicas |
| status | `: STRING` | Get status string |
| yaml | `: STRING` | Generate YAML |

### Configuration Features (Builder)

| Feature | Signature | Description |
|---------|-----------|-------------|
| set_name | `(name: STRING): like Current` | Set name (chainable) |
| set_image | `(image: STRING): like Current` | Set image (chainable) |
| add_label | `(label: STRING): like Current` | Add label (chainable) |
| set_namespace | `(ns: STRING): like Current` | Set namespace (chainable) |

---

## K8S_RUNNER_DEPLOYER Features

### Deployment Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| deploy_runner | `: BOOLEAN` | Deploy runner |
| scale_runners | `(count: INTEGER)` | Scale replicas |
| remove_runner | `: BOOLEAN` | Remove deployment |
| get_runner_status | `: TUPLE` | Get status |

### Configuration Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| set_namespace | `(ns: STRING)` | Set K8S namespace |
| namespace | `: STRING` | Current namespace |

### YAML Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| generate_deployment_yaml | `: STRING` | Generate YAML |

---

## RUNNER_REGISTRATION_TOKEN Features

| Feature | Signature | Description |
|---------|-----------|-------------|
| token | `: STRING` | Token value |
| expires_at | `: DATE_TIME` | Expiration time |
| is_valid | `: BOOLEAN` | Not empty and not expired |
| is_expired | `: BOOLEAN` | Past expiration |
| time_remaining | `: INTEGER` | Seconds until expiry |
| to_runner_args | `: STRING` | Format for CLI |
