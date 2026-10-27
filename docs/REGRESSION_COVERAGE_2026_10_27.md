# Regression Coverage Update — 2026-10-27

This pass adds focused executable regression cases for ranking, snippets, query tokenization, and autocomplete.

## Coverage

- BM25: empty inputs, unknown terms, repeated query terms, invalid parameters, score production, and deterministic tie ordering.
- TF-IDF: empty inputs, unknown terms, duplicate query terms, term-frequency behavior, result inclusion, and deterministic ties.
- Snippet generation: empty content, zero and short limits, case-insensitive matching, empty query terms, near-end matches, and output bounds.
- Query tokenization: lowercase normalization, punctuation, numbers, input order, repeated delimiters, and symbol-only input.
- Autocomplete: lexicographic suggestions and exact-prefix ordering.

The new tests are registered in CMake/CTest. The previously added unknown-prefix autocomplete test is also registered.

## Verification

Run locally from the repository root:

```sh
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release --parallel 2
ctest --test-dir build -C Release --output-on-failure
```

A commit or a registered test is not evidence that the suite passes. Check the GitHub Actions run for the final commit before treating this pass as verified.
