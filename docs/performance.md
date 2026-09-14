# Performance Notes

For an inverted index, term lookup is proportional to the size of the posting list rather than the total number of indexed documents, assuming average hash-map lookup is constant time.

Index construction is dominated by tokenization and insertion of terms. Memory consumption is primarily driven by the number of unique terms and document-term associations.

Benchmarking should measure indexing throughput, query latency, and memory growth separately.
