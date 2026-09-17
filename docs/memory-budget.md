# Memory Budget

Index memory is dominated by vocabulary entries, posting lists, document IDs, and future term-frequency counters.

Memory measurements should distinguish:
- Raw corpus size.
- Index resident size.
- Per-document overhead.
- Per-term overhead.

This separation makes data-structure tradeoffs measurable.
