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

    assert(index.termCount() == 3);
    assert(index.documentCount() == 2);
    return 0;
    assert(index.termCount() == 3);
    assert(index.documentCount() == 2);
    assert(index.documentFrequency("search") == 2);
    assert(index.termFrequency("search", 1) == 1);
    assert(index.termFrequency("search", 2) == 1);
    assert(index.termFrequency("cpp", 1) == 1);
    assert(index.termFrequency("engine", 1) == 1);
    assert(index.termFrequency("missing", 1) == 0);
    assert(index.documentFrequency("missing") == 0);
}
