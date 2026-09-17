# Error Taxonomy

Runtime failures should be distinguishable by layer:

- Input errors: invalid or empty user queries.
- Loading errors: unavailable or unreadable corpus files.
- Index errors: invalid index state or unsupported persistence format.
- Query errors: malformed query expressions.
- Internal errors: unexpected invariant violations.

Errors should not be hidden as successful empty searches.
