# Regression Test Matrix — 2026-10-09

## Coverage added

The regression suite added in this batch covers the following public behavior:

- Query tokenization: empty input, punctuation-only input, lowercase normalization, and mixed whitespace.
- Stop-word lookup: known words, unknown words, and the current case-sensitive lookup contract.
- TF-IDF ranking: empty indexes, unknown terms, term-frequency ordering, deterministic score ties, and repeated query terms.
- SearchEngine: empty index behavior, basic retrieval, missing terms, ranked retrieval, and index visibility.
- QueryProcessor: empty queries, punctuation normalization, AND-query intersections, and case normalization.
- Index observability: document and vocabulary counts, empty-token documents, and empty indexes.
- Inverted index: repeated additions to one document and term-frequency accounting.
- Retrieval helpers: negative scores in Top-K selection and case-sensitive phrase matching.

## Build integration

CMake registers these regression executables with CTest. The index-statistics targets link both `IndexStats.cpp` and `InvertedIndex.cpp`; ranking targets link the ranker and index implementations; search-engine targets link the tokenizer, ranker, and index implementations.

## Verification status

These tests are committed and registered, but they have not been executed in a clean build in this change batch. Run:

```sh
cmake -S . -B build
cmake --build build --parallel
ctest --test-dir build --output-on-failure
```

A successful configure, compile, and CTest run is required before treating the new test coverage as verified. Test registration is not equivalent to passing tests.
