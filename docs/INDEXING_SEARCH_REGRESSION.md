# Indexing and Search Regression Coverage

The consolidated `indexing_search_regression` target exercises the inverted index, Boolean query processing, TF-IDF and BM25 ranking, query normalization, tokenization, SearchEngine behavior, and autocomplete.

Coverage includes:
- Sorted, unique postings when document IDs arrive out of order
- Term frequency, document frequency, document length, total tokens, and average length
- Empty documents, empty tokens, missing terms, and unknown queries
- Multi-term AND queries and case/punctuation normalization
- TF-IDF and BM25 result filtering and ranking
- SearchEngine retrieval and autocomplete ordering/deduplication

The inverted index now appends directly when a new posting ID is greater than the current final ID, avoiding binary search plus vector insertion on the common monotonically increasing ingestion path. Out-of-order IDs still use lower-bound insertion to preserve sorted postings.

Run the focused regression target with:

```sh
cmake -S . -B build
cmake --build build --target indexing_search_regression
ctest --test-dir build -R '^indexing_search_regression$' --output-on-failure
```
