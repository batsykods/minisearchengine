# Continuous Integration

The GitHub Actions workflow at `.github/workflows/cpp-ci.yml` validates changes on Ubuntu and Windows.

## Checks

1. Configure the project with CMake in Release mode.
2. Build all configured targets with two parallel jobs.
3. Run CTest with failure output enabled.

## Triggers

The workflow runs for pushes to `main`, pull requests targeting `main`, and manual workflow dispatches.

## Local reproduction

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release --parallel 2
ctest --test-dir build -C Release --output-on-failure
```

A green workflow is evidence that the configured build and registered tests pass on the runner. It does not establish benchmark performance or test coverage for behavior that has no registered test.