#include "SearchEngine.h"

#include <cassert>
#include <vector>

int main() {
    SearchEngine engine;
    engine.addDocument(1, std::vector<std::string>{"alpha", "alpha", "alpha"});
    engine.addDocument(2, std::vector<std::string>{"alpha"});
    engine.addDocument(3, std::vector<std::string>{"beta"});

    const auto best = engine.bm25TopKSearch("alpha", 1);
    assert(best.size() == 1);
    assert(best.front().documentId == 1);

    const auto all = engine.bm25TopKSearch("alpha", 5);
    assert(all.size() == 2);
    assert(all[0].score >= all[1].score);

    assert(engine.bm25TopKSearch("alpha", 0).empty());
    assert(engine.bm25TopKSearch("missing", 5).empty());
    return 0;
}
