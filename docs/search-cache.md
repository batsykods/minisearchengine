# Search result cache

`SearchCache` is a bounded least-recently-used cache keyed by the exact query string. A successful lookup promotes an entry to most-recently-used. Inserting an existing key replaces its value and refreshes recency. New entries beyond capacity evict the least-recently-used entry.

A capacity of zero disables storage. Empty result vectors are valid cached values, so callers must use the boolean return value from `get` to distinguish a cache hit from a miss. The cache is not thread-safe; callers sharing it across worker threads must provide external synchronization.
