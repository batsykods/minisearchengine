# Indexing Pipeline

The indexing path is intentionally simple. A document is loaded, its text is tokenized, and each resulting term is associated with the document identifier in the inverted index.

The inverted index is the core retrieval structure because it changes lookup from scanning every document to locating the posting set for a requested term.

Future extensions can add term frequency, positions, phrase queries, and persistent index storage without changing the basic pipeline boundaries.
