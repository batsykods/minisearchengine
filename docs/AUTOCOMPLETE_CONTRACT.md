# Autocomplete Contract

The trie-based autocomplete index stores distinct non-empty strings. Suggestions are emitted in lexicographic order because child edges are held in an ordered map. The limit bounds the number of collected suggestions; zero returns an empty result.

Matching is case-sensitive. Callers should normalize indexed words and prefixes consistently if case-insensitive suggestions are required. The current index is an independent component and is not automatically updated when documents are added to `SearchEngine`.
