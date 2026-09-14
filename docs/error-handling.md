# Error Handling

Document loading failures should be explicit and must not silently create partial index state.

Invalid or unavailable input should be reported at the loading boundary. Search for an unknown term should remain a normal empty-result case, not an exceptional condition.

Keeping input failures distinct from valid empty results prevents callers from confusing missing data with successful searches that found nothing.
