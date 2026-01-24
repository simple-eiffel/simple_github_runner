# 7S-01: SCOPE - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Problem Domain

Automated deployment and management of GitHub Actions self-hosted runners on Kubernetes. The library provides programmatic control over runner lifecycle through the GitHub API and K8S.

## Target Users

- DevOps engineers automating CI/CD infrastructure
- Organizations needing self-hosted runners for security/performance
- Teams deploying Eiffel build environments
- Platform teams managing ephemeral build agents

## Problem Statement

Setting up GitHub Actions self-hosted runners requires:
1. Manual token management (registration tokens expire)
2. Kubernetes deployment YAML creation
3. Scaling and lifecycle management
4. Coordination between GitHub API and K8S

Developers need a programmatic way to deploy, scale, and manage runners.

## Boundaries

### In Scope
- GitHub API integration for runner tokens
- Runner registration and removal
- Kubernetes deployment generation
- Runner scaling operations
- Configuration management
- Quick one-liner API for common operations

### Out of Scope
- Runner software installation
- Custom Docker image building
- Network policy management
- Secrets management (beyond tokens)
- Non-Kubernetes deployments

## Success Criteria

1. One-line runner deployment
2. Automatic token refresh handling
3. Clean Kubernetes YAML generation
4. Repository and organization scope support
5. Error reporting for failed operations

## Dependencies

- simple_http: API communication
- simple_json: JSON parsing
- simple_k8s: Kubernetes deployment
- GitHub REST API
- Kubernetes API
