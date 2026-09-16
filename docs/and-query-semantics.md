# AND Query Semantics

For an AND query, a document is a match only when it appears in the posting list for every normalized query term. The operation should short-circuit when any term has no postings.
