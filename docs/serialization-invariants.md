# Serialization Invariants

A saved index must reconstruct the same logical search state.

Round-trip validation requires:
- Equal document count.
- Equal vocabulary membership.
- Equal document frequency for every term.
- Equal posting membership for every term.
- Identical query results for deterministic queries.
