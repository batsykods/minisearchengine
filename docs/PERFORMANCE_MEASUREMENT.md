# Performance Measurement Protocol

Measure correctness and performance separately. Use a fixed corpus, stable compiler flags, and repeatable queries. Record compiler version, build type, document count, total token count, vocabulary size, index-build duration, query latency, and result count.

Run multiple repetitions and report median and p95 latency. Keep benchmarks outside ordinary unit tests; shared CI runners make strict wall-clock assertions unreliable. Compare ranking algorithms only when they return results for the same query set and corpus.
