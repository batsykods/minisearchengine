# Search Cache Semantics

`SearchCache` is a bounded, in-memory LRU cache keyed by the exact query string.

- Cache hits move the entry to the most-recently-used position.
- Updating an existing key replaces its result and refreshes recency.
- Inserting beyond capacity evicts the least-recently-used entry.
- Capacity zero disables storage.
- `clear()` removes all entries while preserving configured capacity.

The cache is not thread-safe. A future concurrent server must protect access or replace this implementation with a concurrency-aware design. Cache keys must include ranking options and index version if the cache is integrated into configurable search.
