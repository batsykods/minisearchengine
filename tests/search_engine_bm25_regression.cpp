#include <cassert>
#include <cmath>
#include "SearchEngine.h"

int main() {
    SearchEngine engine;
    engine.addDocument(12, {"alpha", "beta", "alpha"});
    engine.addDocument(4, {"alpha", "gamma"});
    engine.addDocument(9, {"beta", "gamma"});

    const auto results = engine.bm25Search("ALPHA");
    assert(results.size() == 2);
    assert(results[0].documentId == 12);
    assert(results[1].documentId == 4);
    assert(results[0].score > results[1].score);

    const auto normalized = engine.bm25Search("alpha!!!");
    assert(normalized.size() == results.size());
    for (std::size_t i = 0; i < results.size(); ++i) {
        assert(normalized[i].documentId == results[i].documentId);
        assert(std::abs(normalized[i].score - results[i].score) < 1e-12);
    }

    assert(engine.bm25Search("").empty());
    assert(engine.bm25Search("missing").empty());
    assert(engine.bm25Search("alpha", -1.0, 0.75).empty());
    assert(engine.bm25Search("alpha", 1.2, 2.0).empty());
    return 0;
}
