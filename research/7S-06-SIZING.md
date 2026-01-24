# 7S-06: SIZING - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Implementation Size

### Actual Implementation

| Component | Lines | Complexity |
|-----------|-------|------------|
| GITHUB_RUNNER_CONFIG | ~200 | Low |
| GITHUB_RUNNER_API | ~230 | Medium |
| GITHUB_RUNNER_QUICK | ~145 | Low (facade) |
| RUNNER_REGISTRATION_TOKEN | ~125 | Low |
| K8S_RUNNER_DEPLOYER | ~240 | Medium |
| **Total Source** | **~940** | **Medium** |

### Test Coverage

| Test File | Lines | Tests |
|-----------|-------|-------|
| lib_tests.e | ~80 | Basic tests |
| test_app.e | ~30 | Runner |
| **Total Tests** | **~110** | |

### Complexity Breakdown

#### Simple (configuration/data)
- GITHUB_RUNNER_CONFIG: Settings holder
- RUNNER_REGISTRATION_TOKEN: Token data
- GITHUB_RUNNER_QUICK: Facade

#### Medium (API integration)
- GITHUB_RUNNER_API: HTTP + JSON parsing
- K8S_RUNNER_DEPLOYER: Deployment logic

### Dependencies

```
simple_github_runner
    +-- simple_http
    +-- simple_json
    +-- simple_k8s
    +-- EiffelBase
        +-- DATE_TIME
        +-- HASH_TABLE
        +-- ARRAYED_LIST
```

### Build Time Impact
- Clean build: ~10 seconds
- Incremental: ~4 seconds
- Depends on simple_http, simple_json, simple_k8s

### Runtime Footprint
- Memory: ~50KB base
- Network: GitHub API + K8S API calls
- External: Requires K8S cluster access

## Estimation vs Actual

| Aspect | Estimated | Actual |
|--------|-----------|--------|
| Development time | 2-3 days | 2 days |
| Core classes | 4-5 | 5 |
| Lines of code | 800 | 940 |
| Test coverage | 70% | ~50% |
