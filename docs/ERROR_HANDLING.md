# Error Handling Policy

Document loading may fail because a path is missing, unreadable, or invalid. The CLI should report the failing path and a concise error without presenting a successful search result.

Library components should communicate recoverable input conditions through documented return values or exceptions, consistently. Avoid silently converting I/O failures into empty documents, because this makes missing data indistinguishable from valid empty content.

The current CLI catches standard exceptions at the top level. Future work should add tests for invalid paths and ensure diagnostics remain suitable for scripts.
