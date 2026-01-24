# 7S-07: RECOMMENDATION - simple_github_runner


**Date**: 2026-01-23

**Status:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Library:** simple_github_runner

## Recommendation: COMPLETE

This library has been implemented and is part of the simple_* ecosystem.

## Implementation Summary

### What Was Built
- GitHub API client for runner management
- Runner registration/removal token handling
- Kubernetes deployment generation
- Quick facade for one-liner operations
- Repository and organization scope support
- Builder-style configuration

### Architecture Decisions

1. **Facade Pattern:** GITHUB_RUNNER_QUICK for simple use
2. **Separation:** Config, API, Deployer as separate concerns
3. **Ecosystem Integration:** Uses simple_http, simple_json, simple_k8s
4. **Token Handling:** Automatic token acquisition before deploy

### Current Status

| Phase | Status |
|-------|--------|
| Phase 1: Core | Complete |
| Phase 2: Features | Partial |
| Phase 3: Performance | N/A |
| Phase 4: Documentation | Partial |
| Phase 5: Testing | Partial |
| Phase 6: Hardening | Partial |

## Future Enhancements

### Priority 1 (Should Have)
- [ ] GitHub App authentication
- [ ] K8S secrets for tokens
- [ ] Auto-scaling based on job queue

### Priority 2 (Nice to Have)
- [ ] Multiple runner deployment
- [ ] Health monitoring
- [ ] Webhook integration

### Priority 3 (Future)
- [ ] Non-K8S deployment (Docker, VM)
- [ ] Runner image customization
- [ ] Integration with ARC

## Lessons Learned

1. **Token expiration:** Must handle 1-hour validity
2. **Dual scope:** Repository and org need different URLs
3. **K8S complexity:** Deployment YAML is verbose

## Conclusion

simple_github_runner provides a programmatic way to deploy GitHub Actions self-hosted runners to Kubernetes. The quick API enables one-liner deployment while the underlying classes allow customization. The library is production-ready for basic runner deployment needs.
