# CI Verification Checklist

For a trustworthy change:
1. Configure a clean build directory with CMake.
2. Compile every target, not only the main executable.
3. Run CTest with failure output enabled.
4. Exercise the CLI with a known query and a query with no matches.
5. Confirm the working tree and generated artifacts are clean.
6. Record the actual pass/fail counts in the change report.

Adding test source files or CMake entries does not prove that tests pass. The BM25 CLI integration in this change needs a full clean build before it can be called verified.
