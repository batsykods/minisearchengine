# Index Ingestion Policy

Document tokens are normalized to lowercase alphanumeric terms before being passed to the inverted index. The index aggregates repeated terms within a single insertion batch, maintains sorted postings, and tracks term frequencies and document lengths.

Adding the same document ID multiple times is currently additive: term frequencies and document length increase again. It is not an upsert operation. Production ingestion should define whether a repeated ID means replacement, append, or rejection and should update all derived statistics atomically.
