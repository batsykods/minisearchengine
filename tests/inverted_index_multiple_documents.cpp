#include "InvertedIndex.h"
#include <cassert>

int main() {
    InvertedIndex index;
    index.addDocument(1, {"cpp", "search"});
    index.addDocument(2, {"search", "engine"});

    const auto& results = index.search("search");
    assert(results.size() == 2);
    assert(results[0] == 1);
    assert(results[1] == 2);
    assert(index.termCount() == 3);
    return 0;
}
