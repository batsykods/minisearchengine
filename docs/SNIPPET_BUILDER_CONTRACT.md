# Snippet Builder Contract

`SnippetBuilder::build` returns an excerpt bounded by the requested maximum length. Empty content or a zero limit returns an empty string. For long content, it searches for query terms case-insensitively and attempts to position the excerpt around the earliest match.

The current implementation does not return character offsets or highlight matches, and it performs a lowercase copy of the full content. Large-corpus integrations should consider a bounded search strategy and explicit UTF-8-aware offset handling.
