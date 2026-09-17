# Index Serialization Format

Persistent index storage should use a versioned binary or structured text format.

Required metadata:
- Format version.
- Document count.
- Vocabulary size.
- Posting lists.
- Term-frequency data when enabled.

Loading must reject unsupported versions instead of silently interpreting incompatible data.
