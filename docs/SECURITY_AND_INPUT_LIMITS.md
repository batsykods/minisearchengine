# Security and Input Limits

The current program is a local command-line tool, not a network service. It reads fixed sample paths and accepts the query through command-line arguments.

Before exposing it as a service:
- Bound query length and token count.
- Bound document size and ingestion rate.
- Validate paths if users can provide document locations.
- Avoid logging sensitive document text or full queries by default.
- Add request timeouts, authentication, and rate limits at the API boundary.
- Treat indexed documents as untrusted input and escape snippets when rendering them in HTML.

The current snippet output is plain terminal text; downstream HTML consumers must perform context-appropriate escaping.
