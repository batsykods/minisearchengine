# Index Build Contract

Index construction consumes documents and their normalized token streams.

For every document:
- Register its ID.
- Ignore empty tokens.
- Add the ID to each token posting list once.
- Keep indexing independent from query execution.
