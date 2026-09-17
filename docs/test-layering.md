# Test Layering

Tests should be organized around component boundaries.

Unit tests cover tokenizer, index operations, and query processing independently.
Integration tests cover document loading through query execution.
Regression tests preserve previously fixed edge cases.

Performance benchmarks remain separate from correctness tests.
