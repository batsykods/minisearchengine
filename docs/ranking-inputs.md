# Ranking Inputs

The future ranking layer can use signals already exposed by the index:

- Term frequency within a document.
- Document frequency across the corpus.
- Number of matched query terms.
- Stable document ID as a final tie-breaker.

Ranking must remain separate from candidate retrieval.
