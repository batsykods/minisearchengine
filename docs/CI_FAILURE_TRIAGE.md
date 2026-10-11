# CI Failure Triage

Use this sequence when the cross-platform workflow fails.

1. Identify whether configuration, compilation, or CTest failed.
2. Reproduce the same command locally before changing source code.
3. For compiler errors, inspect the first diagnostic rather than downstream errors.
4. For test failures, record the failing test name and assertion output.
5. Check whether the failure is specific to Windows paths, compiler behavior, or filesystem semantics.
6. Fix the underlying behavior and add a regression test where practical.
7. Re-run the full CTest suite, not only the failing target.

Do not disable a failing test merely to obtain a green workflow. Document unavoidable platform-specific expectations explicitly.