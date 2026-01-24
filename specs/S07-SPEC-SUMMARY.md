# S07: SPEC SUMMARY - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Executive Summary

simple_github_runner provides programmatic deployment and management of GitHub Actions self-hosted runners on Kubernetes, with a simple facade API and ecosystem integration.

## Key Specifications

### Architecture
- Pattern: Facade over API + Deployer
- Layers: Quick (facade) -> Config/Deployer -> API
- Dependencies: simple_http, simple_json, simple_k8s

### Classes (5 total)
| Class | Role |
|-------|------|
| GITHUB_RUNNER_QUICK | Facade API |
| GITHUB_RUNNER_CONFIG | Configuration |
| GITHUB_RUNNER_API | GitHub REST client |
| RUNNER_REGISTRATION_TOKEN | Token data |
| K8S_RUNNER_DEPLOYER | K8S operations |

### Key Features
- One-liner deployment
- Repository and organization scope
- Builder-style configuration
- Automatic token handling
- Kubernetes deployment generation
- Scaling support

### Contracts Summary
- Config validation for empty strings
- Scope enforcement
- Token validity checks
- Scale count >= 0

### Constraints
- Requires GitHub PAT
- Requires K8S cluster access
- 1-hour token validity
- Internet connectivity required

## Quality Metrics

| Metric | Target | Actual |
|--------|--------|--------|
| Test coverage | 70% | ~50% |
| Contract coverage | 80% | 75% |
| Documentation | Complete | Partial |

## Risk Assessment

| Risk | Mitigation |
|------|------------|
| Token exposure | Document security |
| API rate limits | Caching |
| K8S failures | Error reporting |

## Future Roadmap

1. Short term: Better token security
2. Medium term: Auto-scaling
3. Long term: GitHub App auth
