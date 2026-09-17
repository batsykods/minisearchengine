# Document Loading Contract

Document loading converts files from the configured corpus directory into document records.

The loader should:
- Enumerate supported regular files.
- Assign stable document IDs.
- Read text without modifying search semantics.
- Report filesystem failures explicitly.
- Keep file traversal separate from indexing.
