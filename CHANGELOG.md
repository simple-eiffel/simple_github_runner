# Changelog

## [Unreleased] - 2026-10-08

### Fixed
- `generate_deployment_yaml` now emits real block-style YAML (was JSON text), via `MANIFEST_BUILDER.add_json`.
- Adapted `GITHUB_RUNNER_API` and `K8S_RUNNER_DEPLOYER` to the current simple_http, simple_json and simple_k8s APIs.

