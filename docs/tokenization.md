# Tokenization

Tokenization is the boundary between raw document text and indexable terms.

The tokenizer should produce deterministic output for identical input. Normalization decisions such as case folding and punctuation handling belong here rather than inside the index, keeping index keys consistent.

Edge cases worth preserving in tests include empty input, punctuation-only input, repeated whitespace, mixed case, and repeated terms.
