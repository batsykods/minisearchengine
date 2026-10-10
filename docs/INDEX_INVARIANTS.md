# Inverted Index Invariants

The inverted index maintains these invariants:

- A term's postings list is sorted by ascending document ID.
- Each document ID appears at most once in a term's postings list.
- Term frequency counts occurrences, while document frequency counts documents containing the term.
- Empty tokens are ignored.
- Adding a document ID more than once updates term counts for the same ID; callers should avoid accidental re-ingestion unless additive counts are intended.

The invariants support binary search, deterministic Boolean intersections, and repeatable tests.

## Verification

The regression suite includes checks for sorted postings, duplicate terms, empty tokens, and frequency semantics. These tests must be compiled and run to validate behavior in the current build environment.
