# Testing

Configure and build with CMake, then run CTest from the build directory:

```sh
cmake -S . -B build
cmake --build build --parallel
ctest --test-dir build --output-on-failure
```

New regression cases should isolate one contract, use deterministic inputs, and assert observable behavior. Keep production components independent of the command-line entry point so tests can link the smallest required source set. Do not report tests as passing until the commands have actually run on the current revision.
