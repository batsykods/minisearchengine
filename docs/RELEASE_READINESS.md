# Release Readiness Checklist

Before calling a milestone release-ready:

- [ ] Clean CMake configure succeeds.
- [ ] All targets compile with warnings enabled.
- [ ] CTest completes with no failures.
- [ ] CLI behavior is checked with known queries.
- [ ] Missing-file and empty-query behavior is documented.
- [ ] README commands match actual executable behavior.
- [ ] New public headers have examples or contract documentation.
- [ ] No generated build artifacts are committed.
- [ ] Known limitations are explicit.
- [ ] The commit history contains coherent changes rather than count-only commits.

Do not report a percentage increase based only on commits or number of test files.
