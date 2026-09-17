# Ranking Pipeline

Ranking should run after candidate retrieval and before final presentation.

Pipeline:
1. Parse and normalize the query.
2. Retrieve candidate documents.
3. Compute per-document ranking signals.
4. Produce a score.
5. Apply deterministic tie-breaking.
6. Return ordered results.
