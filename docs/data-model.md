# Data Model

A document has a stable identifier and associated text content. Tokenization derives index terms from that content.

The inverted index stores the relationship from a normalized term to the set of document identifiers containing it. Keeping document identity separate from term storage makes duplicate occurrences and multi-document indexing easier to reason about.
