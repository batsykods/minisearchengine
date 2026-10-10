# Phrase Matching Contract

Phrase matching checks whether a query token sequence occurs contiguously in a document token sequence.

A phrase matches only when all tokens occur in the requested order with no intervening token. Empty phrases and phrases longer than the document token sequence return false. Matching is case-sensitive; normalization must happen before calling the matcher if case-insensitive behavior is required.

The current matcher is a reusable primitive. It is not yet wired into the command-line query syntax or positional inverted index.
