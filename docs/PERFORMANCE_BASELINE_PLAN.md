# Performance Baseline Plan

Measure the engine before optimizing it. A reproducible benchmark should record:

- Compiler and version.
- Build type and optimization flags.
- Corpus document count and total token count.
- Unique vocabulary size and posting count.
- Index construction duration.
- Query latency at median and p95.
- Result count and ranking configuration.

Use a fixed corpus and fixed query set. Run multiple repetitions and report the median. Keep benchmark runs separate from correctness tests; avoid brittle timing thresholds in ordinary CI.
