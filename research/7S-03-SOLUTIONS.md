# 7S-03: SOLUTIONS - simple_github_runner


**Date**: 2026-01-23

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Existing Solutions Comparison

### actions/runner-controller (ARC)
- **Pros:** Official, full-featured, K8S native
- **Cons:** Complex setup, requires CRDs
- **Approach:** Kubernetes operator pattern

### myoung34/docker-github-actions-runner
- **Pros:** Simple Docker image, well-maintained
- **Cons:** Manual orchestration, no API
- **Approach:** Docker-first, manual scaling

### philips-labs/terraform-aws-github-runner
- **Pros:** Auto-scaling, AWS integrated
- **Cons:** AWS-only, Terraform required
- **Approach:** Infrastructure as code

### summerwind/actions-runner-controller
- **Pros:** Kubernetes native, webhook scaling
- **Cons:** Deprecated in favor of ARC
- **Approach:** Custom controller

## simple_github_runner Approach

### Design Philosophy
- Eiffel-native programmatic API
- Simple one-liner deployment
- Direct GitHub API integration
- Kubernetes-first deployment

### Key Differentiators

1. **Programmatic:** Eiffel API, not YAML/CLI
2. **Simple API:** One-liner deployment
3. **Ecosystem Integration:** Uses simple_http, simple_json, simple_k8s
4. **Dual Scope:** Repository and organization support

### Architecture

```
GITHUB_RUNNER_QUICK (Facade)
    |
    +-- GITHUB_RUNNER_CONFIG (Settings)
    +-- K8S_RUNNER_DEPLOYER (K8S operations)
            |
            +-- GITHUB_RUNNER_API (GitHub API)
            |       +-- RUNNER_REGISTRATION_TOKEN
            |
            +-- K8S_CLIENT (simple_k8s)
```

### Trade-offs Made

| Decision | Benefit | Cost |
|----------|---------|------|
| No CRDs | Simpler setup | Manual scaling |
| YAML generation | Portable | No live updates |
| PAT auth | Simple | No GitHub App |
| Fixed Docker image | Simple | Less flexible |
