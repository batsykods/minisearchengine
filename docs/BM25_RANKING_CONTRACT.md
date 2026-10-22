# BM25 Ranking Contract

The engine exposes BM25 through `SearchEngine::bm25Search`. The ranker uses term frequency, document frequency, document length, average document length, and configurable `k1` and `b` parameters.

Current behavior:
- Empty indexes and empty queries return no results.
- Unknown terms contribute no matching documents.
- Repeated query terms are deduplicated before scoring.
- Invalid parameters return an empty result set.
- Results are ordered by descending score, then ascending document ID.

This is a baseline implementation. Tune parameters against a labelled query set rather than selecting them from intuition alone.
