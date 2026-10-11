# Regression Test Policy

Every confirmed defect should have a reproducible case before or alongside its fix when feasible.

Tests should assert externally observable behavior, use small deterministic inputs, and avoid dependence on the current working directory unless path behavior is the subject of the test. Each test must be registered with CTest through the project build configuration.

Prefer one focused assertion scenario per test executable when that matches the repository's existing conventions. Include boundary cases such as empty inputs, missing terms, repeated tokens, duplicate document identifiers, and documents with no searchable tokens where relevant.

A passing test suite only covers registered cases; it is not a substitute for performance measurement, sanitizer runs, or manual CLI verification.