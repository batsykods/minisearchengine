# API Stability Notes

The current C++ API is an evolving learning project, not a stable library interface. Headers under `include/` expose implementation-oriented classes such as `InvertedIndex`, `QueryProcessor`, `Ranker`, `SearchEngine`, `TopK`, and `PhraseMatcher`.

Before promising API stability:

1. Define ownership and lifetime rules.
2. Specify duplicate-document insertion semantics.
3. Separate normalized and raw text APIs.
4. Document thread-safety guarantees.
5. Add compatibility tests for public signatures.
6. Version any persistent index format before introducing disk persistence.
