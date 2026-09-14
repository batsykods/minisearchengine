# C++ Guidelines

The project targets modern C++ and should favor RAII, const-correct interfaces, standard-library containers, and clear ownership semantics.

Headers should expose minimal public interfaces. Implementation details belong in source files. Functions should have narrow responsibilities so indexing, tokenization, and loading can be tested independently.
