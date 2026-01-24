# 7S-02: STANDARDS - simple_github_runner


**Date**: 2026-01-23

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Applicable Standards

### GitHub REST API v3/v4

#### Actions Runners API
- POST /repos/{owner}/{repo}/actions/runners/registration-token
- POST /orgs/{org}/actions/runners/registration-token
- GET /repos/{owner}/{repo}/actions/runners
- DELETE /repos/{owner}/{repo}/actions/runners/{runner_id}

#### Authentication
- Personal Access Token (PAT) with repo or admin:org scope
- Bearer token in Authorization header
- X-GitHub-Api-Version header

### Kubernetes API

#### Deployment Resource
- apiVersion: apps/v1
- kind: Deployment
- Replica scaling
- Environment variables for runner config

#### Namespace Management
- Create namespace if not exists
- Deploy runners into dedicated namespace

### GitHub Actions Runner Protocol

#### Environment Variables
- RUNNER_NAME: Runner identifier
- RUNNER_TOKEN: Registration token
- RUNNER_URL: Repository/org URL
- RUNNER_LABELS: Comma-separated labels
- RUNNER_GROUP: Runner group name

## Implementation Status

| Standard | Coverage | Notes |
|---------|----------|-------|
| Registration token API | Complete | Repo + org scope |
| Removal token API | Complete | For cleanup |
| List runners API | Complete | With status |
| Delete runner API | Complete | By ID |
| K8S Deployment | Complete | YAML generation |
| K8S Scaling | Complete | Replica count |

## Compliance Notes

- API version 2022-11-28 specified
- Token expiration (1 hour) handled
- ISO 8601 date parsing for expiration
