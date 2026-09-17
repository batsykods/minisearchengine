# Multi-Term Intersection

AND queries are evaluated as set intersection over posting lists.

Process:
1. Normalize all query terms.
2. Resolve each term to its posting list.
3. Intersect the smallest candidate set first.
4. Return only documents present for every term.

An unknown term makes the AND result empty.
