# Testing

The project uses CTest to run focused executable-level tests for the search foundation.

## Configure and build

```bash
cmake -S . -B build
cmake --build build
```

## Run the test suite

```bash
ctest --test-dir build --output-on-failure
```

The current suite covers tokenizer behavior, numeric tokens, inverted-index insertion and lookup, duplicate postings, empty tokens, document representation, and the document-to-index pipeline.
