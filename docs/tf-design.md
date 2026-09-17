# Term Frequency Design

Term frequency should count occurrences of a normalized token inside each document.

The frequency structure should support:
- Incrementing a document-term count during indexing.
- Reading a document-term count during ranking.
- Returning zero for absent document-term pairs.

The existing document-frequency API remains unchanged.
