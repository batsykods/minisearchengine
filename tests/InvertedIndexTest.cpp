#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;

    index.addDocument(1, {"cpp", "search", "engine"});
    index.addDocument(2, {"search", "engine"});

    assert(index.contains("search"));
    assert(!index.contains("missing"));
    assert(index.search("search") == std::vector<int>({1, 2}));
    assert(index.search("cpp") == std::vector<int>({1}));
    assert(index.search("missing").empty());

    return 0;
}
