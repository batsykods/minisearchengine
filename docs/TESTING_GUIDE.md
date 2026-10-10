# Testing Guide

Configure and build from the repository root:

```sh
cmake -S . -B build
cmake --build build --parallel
ctest --test-dir build --output-on-failure
```

Use a clean build directory after CMake changes if cached generator state causes confusion. A test is considered verified only after its executable builds and CTest reports it as passed. A source file existing in the repository or an `add_test` entry alone is not evidence that the test passes.

When a test fails, preserve the failing assertion and add the smallest reproduction before changing production behavior.
