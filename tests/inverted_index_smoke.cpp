#include "InvertedIndex.h"

#include <cassert>
#include <vector>

int main() {
    InvertedIndex index;

    index.addDocument(1, {"search", "engine", "search"});
    index.addDocument(2, {"engine", "index"});

    assert(index.contains("search"));
    assert(index.contains("engine"));
    assert(!index.contains("missing"));
    assert(index.termCount() == 3);
    assert((index.search("search") == std::vector<int>{1}));
    assert((index.search("engine") == std::vector<int>{1, 2}));
    assert(index.search("missing").empty());

    return 0;
}
