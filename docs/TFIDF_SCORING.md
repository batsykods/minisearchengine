# TF-IDF Scoring

The current ranker scores each matching document by summing term-frequency-weighted inverse document frequency across query terms.

The inverse document frequency currently uses:

`log(1 + N / df)`

where `N` is the indexed document count and `df` is the term's document frequency. Results are ordered by descending score, then ascending document ID for deterministic ties.

## Limitations

- Scores are not length-normalized.
- Repeated query terms currently contribute repeatedly.
- No BM25 saturation or document-length normalization is implemented.
- The score is a baseline, not a calibrated relevance probability.

These limitations should be addressed with explicit relevance tests and a documented scoring contract.
