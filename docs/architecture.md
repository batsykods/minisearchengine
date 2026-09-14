# Architecture

MiniSearchEngine is organized as a small C++ search pipeline:

1. `DocumentLoader` reads source documents.
2. `Document` stores document identity and content.
3. `Tokenizer` converts text into normalized terms.
4. `InvertedIndex` maps terms to document identifiers.
5. The application layer coordinates indexing and querying.

The design keeps parsing, representation, tokenization, and indexing separate so each component can evolve independently.
