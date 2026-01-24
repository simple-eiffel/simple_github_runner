# S05: CONSTRAINTS - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Technical Constraints

### External Service Dependencies

| Service | Requirement |
|---------|-------------|
| GitHub API | Internet access, valid PAT |
| Kubernetes | Cluster access, kubectl configured |
| Docker Registry | Image pull access |

### API Constraints

| Constraint | Value | Source |
|------------|-------|--------|
| Token validity | 1 hour | GitHub API |
| API rate limit | 5000/hour | GitHub API |
| API version | 2022-11-28 | Implementation |

### Kubernetes Constraints

| Constraint | Default | Configurable |
|------------|---------|--------------|
| Namespace | github-runners | Yes |
| CPU request | 500m | Via deployment |
| CPU limit | 2000m | Via deployment |
| Memory request | 1Gi | Via deployment |
| Memory limit | 4Gi | Via deployment |

## Business Rules

### Scope Rules

1. **Repository scope:** Requires repo permissions
2. **Organization scope:** Requires admin:org permissions
3. **Scope determines URLs:** Different API endpoints

### Token Rules

1. **Registration token:** Valid 1 hour, single-use
2. **Removal token:** For unregistering runner
3. **PAT required:** For all API calls

### Deployment Rules

1. **Namespace created:** If not exists
2. **Deployment naming:** {runner_name}-deployment
3. **Labels applied:** app=github-runner, runner-name={name}

## Error Conditions

| Condition | Error Message | Recovery |
|-----------|---------------|----------|
| Invalid PAT | "Authentication failed" | Check token |
| Expired token | "Token expired" | Re-acquire |
| K8S unavailable | "Connection refused" | Check cluster |
| Runner exists | "Already registered" | Use different name |

## State Machine

### Runner Lifecycle
```
[Not Deployed] -- deploy() --> [Deployed]
[Deployed] -- scale(N) --> [Scaled to N]
[Deployed] -- remove() --> [Not Deployed]
```

### Token Lifecycle
```
[Acquired] -- 1 hour --> [Expired]
[Acquired] -- used --> [Consumed]
```
