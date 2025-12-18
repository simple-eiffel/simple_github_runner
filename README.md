# simple_github_runner

GitHub Actions Self-Hosted Runner Management for Eiffel - Deploy and manage runners on Kubernetes.

## Overview

`simple_github_runner` provides Eiffel-native management of GitHub Actions self-hosted runners deployed to Kubernetes. It combines `simple_k8s` for container orchestration with the GitHub API for runner registration.

## Features

- **Full Dogfooding**: Uses Simple Eiffel libraries to manage Simple Eiffel CI/CD
- **GitHub API Integration**: Automatic runner registration and token management
- **Kubernetes Deployment**: Deploy runners as K8S pods using `simple_k8s`
- **Fluent Builder API**: Easy configuration with method chaining
- **Design by Contract**: Full DBC validation

## Quick Start

```eiffel
-- Deploy a runner for a repository
local
    runner: GITHUB_RUNNER_QUICK
do
    create runner.make_for_repository ("simple-eiffel", "simple_k8s", "ghp_your_token")
    runner.set_name ("eiffel-runner-1")
           .add_label ("linux")
           .add_label ("x64")
           .deploy

    if runner.has_error then
        print ("Error: " + runner.last_error)
    else
        print ("Runner deployed: " + runner.status)
    end
end
```

## Classes

| Class | Purpose |
|-------|---------|
| `GITHUB_RUNNER_CONFIG` | Runner configuration (repo/org, token, labels) |
| `GITHUB_RUNNER_API` | GitHub API client for runner management |
| `RUNNER_REGISTRATION_TOKEN` | Registration token from GitHub |
| `K8S_RUNNER_DEPLOYER` | Deploy runners to Kubernetes |
| `GITHUB_RUNNER_QUICK` | One-liner convenience API |

## Architecture

```
┌─────────────────────────────────────────────┐
│         GITHUB_RUNNER_QUICK                  │
│         (Convenience API)                    │
└────────────────┬────────────────────────────┘
                 │
    ┌────────────┴────────────┐
    │                         │
    ▼                         ▼
┌─────────────────┐   ┌─────────────────────┐
│ GITHUB_RUNNER_  │   │ K8S_RUNNER_DEPLOYER │
│ API             │   │                     │
│ (GitHub REST)   │   │ (simple_k8s)        │
└────────┬────────┘   └──────────┬──────────┘
         │                       │
         ▼                       ▼
┌─────────────────┐   ┌─────────────────────┐
│  api.github.com │   │ Kubernetes Cluster  │
└─────────────────┘   └─────────────────────┘
```

## Prerequisites

1. **GitHub Personal Access Token** with `admin:org` (org runners) or `repo` (repo runners) scope
2. **Kubernetes cluster** (Docker Desktop, minikube, or cloud)
3. **kubeconfig** configured for cluster access
4. **Docker image** with GitHub Actions runner + EiffelStudio

## Configuration

### Repository-Level Runner

```eiffel
create config.make_for_repository ("owner", "repo", "ghp_token")
config.set_runner_name ("my-runner")
config.add_label ("eiffel")
config.add_label ("linux")
```

### Organization-Level Runner

```eiffel
create config.make_for_organization ("my-org", "ghp_token")
config.set_runner_name ("org-runner")
config.add_label ("shared")
```

## Operations

### Deploy Runner

```eiffel
create deployer.make (config)
deployer.set_namespace ("ci-runners")
if deployer.deploy_runner then
    print ("Runner deployed successfully")
end
```

### Scale Runners

```eiffel
deployer.scale_runners (3)  -- Scale to 3 replicas
```

### Remove Runner

```eiffel
deployer.remove_runner
```

### Check Status

```eiffel
if attached deployer.get_runner_status as status then
    print ("Ready: " + status.ready.out + "/" + status.total.out)
end
```

### Generate YAML (for manual review)

```eiffel
print (deployer.generate_deployment_yaml)
```

## Dependencies

- `simple_k8s` - Kubernetes client
- `simple_http` - HTTP requests to GitHub API
- `simple_json` - JSON parsing
- `simple_base64` - Token encoding
- `simple_logger` - Logging

## Docker Image

The runner pods use a Docker image with:
- GitHub Actions runner binary
- EiffelStudio compiler
- Simple Eiffel libraries

See `D:/prod/simple_ci/docker/Dockerfile` for the image definition.

## GitHub Workflow

Copy `D:/prod/simple_ci/workflows/eiffel-ci.yml` to `.github/workflows/` in your repository.

## License

MIT License - Larry Rix

## See Also

- [simple_k8s](../simple_k8s/) - Kubernetes client library
- [K8S Infrastructure Plan](../reference_docs/deployment/K8S_INFRASTRUCTURE_PLAN.md)
- [GitHub Actions Runner Documentation](https://docs.github.com/en/actions/hosting-your-own-runners)
