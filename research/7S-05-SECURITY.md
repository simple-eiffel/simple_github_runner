# 7S-05: SECURITY - simple_github_runner

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Security Considerations

### Threat Model

| Threat | Mitigation | Status |
|--------|------------|--------|
| Token exposure | Memory only, no persist | Partial |
| Runner compromise | Isolated namespace | Delegated |
| API credential theft | TLS required | Via simple_http |
| Privilege escalation | Limited K8S perms | Delegated |

### Token Security

#### Personal Access Token (PAT)
- Required scopes: repo (repository) or admin:org (organization)
- Passed in Authorization header
- TLS encryption in transit
- Never logged or persisted

#### Registration Token
- Valid for 1 hour only
- Single-use for registration
- Stored in K8S secret (deployment env var)

**Risk:** Token visible in K8S deployment manifest
**Mitigation:** Use K8S secrets instead of plain env vars (future)

### API Security

#### HTTPS Required
- GitHub API: api.github.com (TLS)
- API version specified in header
- Bearer authentication

### Kubernetes Security

#### Namespace Isolation
- Runners in dedicated namespace (github-runners)
- Network policies (not managed by this library)

#### Container Security
- Docker image from simple-eiffel organization
- Resource limits configurable
- No privileged access by default

### Known Limitations

1. **Token in env var:** Visible in pod spec
2. **No secret rotation:** Manual token refresh
3. **PAT vs GitHub App:** PAT simpler but less secure
4. **Trust in Docker image:** Must trust runner image

### Security Recommendations

1. Use short-lived PATs or GitHub App
2. Rotate tokens regularly
3. Use K8S secrets for sensitive config
4. Apply network policies to runner namespace
5. Review runner Docker image security
6. Monitor runner activity in GitHub
