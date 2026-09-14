# Query Model

A basic term query should return the document identifiers stored under the normalized query term.

A missing term should return an empty result set rather than creating an index entry as a side effect.

This model provides a stable base for later Boolean queries, phrase matching, ranking, and top-k retrieval.
