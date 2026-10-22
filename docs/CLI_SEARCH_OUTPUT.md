# CLI Search Output

The command-line executable loads the sample corpus, builds an in-memory index, runs BM25 ranking, and prints document count, vocabulary size, query, result count, scores, document paths, and short snippets.

Examples:

```sh
./build/search_engine
./build/search_engine algorithms
./build/search_engine "inverted index"
```

The corpus paths are currently relative to the process working directory. Run the executable from the repository root unless path configuration is added. A missing sample file is reported as an error rather than silently skipped.
