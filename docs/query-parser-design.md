# Query Parser Design

The parser converts raw CLI input into normalized terms before index lookup.

Rules:
- Trim leading and trailing whitespace.
- Collapse repeated whitespace.
- Normalize case consistently with indexed tokens.
- Remove unsupported punctuation according to tokenizer rules.
- Preserve term order for deterministic downstream processing.
