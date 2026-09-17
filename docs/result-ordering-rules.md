# Result Ordering Rules

Search results must be reproducible for the same index and query.

Ordering policy:
- Primary key: relevance score when ranking is enabled.
- Secondary key: document ID ascending.
- Missing terms produce no result contribution.
- Ties must never depend on unordered container iteration.
