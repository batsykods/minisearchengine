# Prefix autocomplete

`AutocompleteIndex` is a trie-backed prefix lookup component. Inserted non-empty terms are stored once. Suggestions are returned in lexicographic order and are capped by the caller's limit.

## API

- `insert(word)`: add a term; duplicate insertions do not change the count.
- `suggest(prefix, limit)`: return at most `limit` terms beginning with the exact prefix.
- `size()` and `empty()`: inspect the number of distinct stored terms.

Matching is case-sensitive. Normalize terms before insertion and normalize user prefixes with the same policy when case-insensitive behavior is desired. A zero limit returns an empty result.
