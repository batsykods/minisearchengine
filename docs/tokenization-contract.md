# Tokenization Contract

Tokenization is the boundary between raw document text and the inverted index.

The tokenizer must produce normalized, non-empty tokens and apply the same normalization policy used for queries.

Changing tokenization rules requires corresponding regression updates because it changes the index vocabulary.
