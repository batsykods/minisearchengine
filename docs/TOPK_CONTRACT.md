# Top-K Retrieval Contract

Top-K selection sorts results using `SearchResult` ordering and truncates the list to the requested maximum.

- A limit of zero returns no results.
- A limit larger than the result count returns all results.
- Higher scores sort first.
- Equal scores are ordered by ascending document ID.

The implementation currently sorts the full result vector, so its complexity is O(n log n). A heap-based or partial-selection implementation can reduce work for large result sets; benchmark before changing the implementation.
