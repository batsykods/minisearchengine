# Release Verification

Before tagging a release:

- Configure from a clean build directory.
- Build every configured target in Release mode.
- Run the complete CTest suite and retain the output.
- Exercise CLI help and representative successful searches.
- Check empty, whitespace-only, and unknown-term queries.
- Verify that result ordering is deterministic where the contract requires it.
- Review compiler warnings and resolve newly introduced warnings.
- Confirm that documentation matches implemented behavior.
- Record the commit SHA and supported compiler/platform matrix.

Do not claim a release is verified unless these checks have actually been run.