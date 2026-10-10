# Phase 2 Exit Criteria

Phase 2 is complete only when these behaviors are implemented and verified end-to-end:

- Stop-word policy is integrated into indexing or query processing, not only exposed as a helper.
- Phrase queries have defined syntax and use normalized tokens.
- Boolean query operators have documented precedence and semantics.
- TF-IDF or BM25 ranking is used by the user-facing search path.
- Top-K selection is applied to ranked results.
- Relevance and edge-case tests run through CTest.
- The CLI output exposes document IDs and useful scores or metadata.
- README examples reflect actual runtime behavior.

The current repository contains several retrieval primitives, but their existence alone does not satisfy every exit criterion.
