#include "SearchEngine.h"

#include <cassert>
#include <vector>

int main() {
    SearchEngine engine;
    engine.addDocument(1, std::vector<std::string>{"alpha", "alpha"});
    engine.addDocument(2, std::vector<std::string>{"alpha"});
    engine.addDocument(3, std::vector<std::string>{"beta"});
    engine.addDocument(5, std::vector<std::string>{"beta"});
    engine.addDocument(4, std::vector<std::string>{"beta"});

    const auto best = engine.topKSearch("alpha", 1);
    assert(best.size() == 1);
    assert(best.front().documentId == 1);

    const auto all = engine.topKSearch("alpha", 5);
    assert(all.size() == 2);
    assert(all[0].documentId == 1);
    assert(all[1].documentId == 2);

    assert(engine.topKSearch("alpha", 0).empty());
    assert(engine.topKSearch("missing", 5).empty());

    const auto tied = engine.topKSearch("beta", 1);
    assert(tied.size() == 1);
    assert(tied.front().documentId == 3);
    return 0;
}
