# Final Hardening Notes — 2026-10-23

## Changes

- Query tokenization now delegates to the document tokenizer. Punctuation, case folding, digits, and whitespace therefore follow one normalization path.
- TF-IDF ignores duplicate query terms so repeating a word does not multiply its contribution.
- BM25 processes distinct query terms in input order, avoiding hash-iteration-dependent score accumulation.
- Top-K selection uses partial sorting when the requested result count is smaller than the candidate set. This reduces work from a full sort to approximately O(n log k).
- The command-line example builds a document-ID lookup once instead of scanning every loaded document for each result.
- Forty focused regression tests cover query normalization, search integration, TF-IDF edge cases, and Top-K selection.
- GitHub Actions is configured to build all CMake targets and run the complete CTest suite on Linux and Windows.

## Verification status

The changes are committed to `main`. A successful local build or passing CI run has not yet been observed, so these changes must not be described as verified until the GitHub Actions workflow completes successfully.

## Remaining production work

This repository remains a local, in-memory search-engine implementation. Before calling it production-ready, add persistent index storage, configurable document ingestion, large-corpus benchmarks, memory and latency measurements, and explicit evaluation against a relevance-labelled query set. Semantic search, distributed indexing, and RAG remain future scope rather than implemented capabilities.
