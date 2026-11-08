# Implemented Search Capabilities

Verified against the current `main` source tree on 2026-11-08.

## Search and indexing

- Document ingestion is exposed through `SearchEngine::addDocument`.
- The inverted index provides term postings and document-level term statistics.
- Query text is tokenized through the query tokenizer before ranking.
- TF-IDF ranking is exposed through `rankedSearch`.
- BM25 ranking is exposed through `bm25Search`, with configurable (k1) and (b) parameters.
- The BM25 implementation rejects empty indexes, empty queries, non-finite parameters, negative (k1), and (b) outside the inclusive range [0, 1].
- Repeated query terms are de-duplicated before BM25 scoring.
- Ranked results are sorted before being returned.

## Additional components present in the source tree

The repository also contains implementations for autocomplete, phrase matching, search caching, snippet building, stop-word handling, and top-K retrieval. Their exact runtime integration and performance should be verified independently before making production-readiness claims.

## Validation boundary

This document records source-level observations only. It does not claim that the full test suite, sanitizers, benchmarks, or every supported platform were executed during this update. Use the repository's CMake and CTest workflow to validate changes in a local build environment.
