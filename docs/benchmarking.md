# Benchmarking methodology

Record compiler and version, build type, CPU, corpus size, document count, unique vocabulary size, and query mix alongside every result. Separate index construction time from query latency. Report median and p95 latency over repeated runs rather than relying on a single measurement, and compare identical corpora and query sets between revisions.

Correctness tests are a prerequisite for performance claims. Avoid committing machine-specific timing thresholds to unit tests; use a dedicated benchmark run for performance comparisons.
