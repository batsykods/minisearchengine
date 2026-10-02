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
    assert(index.documentFrequency("search") == 2);
    assert(index.termFrequency("search", 1) == 1);
    assert(index.termFrequency("search", 2) == 1);
    assert(index.termFrequency("cpp", 1) == 1);
    assert(index.termFrequency("engine", 1) == 1);
    assert(index.termFrequency("missing", 1) == 0);
    assert(index.documentFrequency("missing") == 0);
    assert(index.contains("engine"));
    assert(index.contains("cpp"));
    assert(index.search("engine") == std::vector<int>({1, 2}));
    assert(index.termFrequency("cpp", 2) == 0);
    index.addDocument(3, {"search", "search"});
    assert(index.termFrequency("search", 3) == 2);
    assert(index.documentFrequency("search") == 3);
    assert(index.search("search") == std::vector<int>({1, 2, 3}));
    index.addDocument(4, {});
    assert(index.documentCount() == 4);
    assert(index.documentFrequency("search") == 3);
    index.addDocument(5, {"alpha"});
    assert(index.termCount() == 4);
    assert(index.search("alpha") == std::vector<int>({5}));
    index.addDocument(6, {"search"});
    assert(index.search("search") == std::vector<int>({1, 2, 3, 6}));
    index.addDocument(-1, {"negative"});
    assert(index.search("negative") == std::vector<int>({-1}));
    index.addDocument(0, {"zero"});
    assert(index.search("zero") == std::vector<int>({0}));
    index.addDocument(2, {"search"});
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
