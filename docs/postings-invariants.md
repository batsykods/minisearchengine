# Posting List Invariants

Each posting list represents documents containing one indexed term.

Invariants:
- Document IDs are unique within a posting list.
- A document is added only after token validation.
- Empty tokens are never indexed.
- Document frequency equals posting-list size.
