# Query Normalization Contract

The current query tokenizer splits on whitespace, removes non-alphanumeric characters from each token, and converts remaining characters to lowercase. Empty normalized tokens are discarded.

Examples:

| Input | Normalized token |
|---|---|
| `Search` | `search` |
| `alpha-beta` | `alphabeta` |
| `!!!` | discarded |
| `C++17` | `c17` |

This is a deliberately simple normalization strategy. It does not provide Unicode-aware tokenization, stemming, lemmatization, or language-specific segmentation. Query normalization should eventually share a common implementation with document tokenization to avoid mismatched terms.
