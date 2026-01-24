# S01: PROJECT INVENTORY - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Project Structure

```
simple_github_runner/
    +-- src/
    |   +-- core/
    |   |   +-- github_runner_api.e       # GitHub API client
    |   |   +-- github_runner_config.e    # Configuration
    |   |   +-- github_runner_quick.e     # Quick facade
    |   |   +-- runner_registration_token.e # Token handling
    |   |
    |   +-- k8s/
    |       +-- k8s_runner_deployer.e     # K8S deployment
    |
    +-- testing/
    |   +-- test_app.e
    |   +-- lib_tests.e
    |
    +-- research/
    +-- specs/
    +-- simple_github_runner.ecf
    +-- README.md
```

## File Inventory

| File | Lines | Purpose |
|------|-------|---------|
| github_runner_api.e | 230 | GitHub REST API |
| github_runner_config.e | 200 | Configuration |
| github_runner_quick.e | 145 | Quick facade |
| runner_registration_token.e | 125 | Token data |
| k8s_runner_deployer.e | 240 | K8S operations |

## Dependencies

### Internal (simple_* ecosystem)
- simple_http
- simple_json
- simple_k8s

### External
- EiffelBase
- GitHub REST API
- Kubernetes API

## Build Targets

| Target | Purpose |
|--------|---------|
| simple_github_runner | Library |
| simple_github_runner_tests | Test suite |
