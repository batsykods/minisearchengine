# Search Complexity

Single-term lookup is expected to be proportional to the cost of locating the term plus the size of its posting list.

Multi-term AND queries should reduce work by intersecting the smallest posting lists first.

Ranking adds work proportional to the number of retrieved candidates and should therefore remain after candidate reduction.
