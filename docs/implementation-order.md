# Implementation Order

1. Stabilize query parsing.
2. Add deterministic result ordering.
3. Track term frequency.
4. Add ranking scores.
5. Serialize the index.
6. Expand regression tests.
7. Add repeatable benchmarks.

The order minimizes cross-feature churn and keeps the current component boundaries intact.
