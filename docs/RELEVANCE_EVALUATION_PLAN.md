# Relevance Evaluation Plan

Ranking quality must be measured independently of build correctness. Create a fixed query set with graded or binary relevance judgements for each document.

Recommended metrics:
- Precision@K for the fraction of top results judged relevant.
- Recall@K when the total relevant set is known.
- Mean reciprocal rank for the first relevant result.
- NDCG@K when graded relevance labels are available.

Keep the query set and labels versioned. Compare TF-IDF and BM25 on the same corpus and query set, and report per-query regressions as well as aggregate metrics. Do not describe a ranking change as an improvement without evidence.
