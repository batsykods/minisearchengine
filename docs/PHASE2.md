# Phase 2 Information Retrieval
The engine now has reusable query tokenization, stop-word primitives, a ranked result model, TF-IDF scoring, and a SearchEngine facade. These components separate retrieval, ranking, and query concerns so later BM25 and phrase-query implementations can replace individual stages without changing the application boundary.
