# CLI Contract

The command-line interface is responsible for selecting the corpus, building the index, accepting queries, and presenting results.

It should not implement tokenization or posting-list logic itself.

CLI behavior should remain stable while internal search components evolve.
