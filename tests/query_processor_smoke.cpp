#include <cassert>
#include <vector>

#include "InvertedIndex.h"
#include "QueryProcessor.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"cpp", "search", "engine"});
    index.addDocument(2, {"cpp", "engine"});
    index.addDocument(3, {"search", "engine"});

    QueryProcessor processor;
    assert((processor.search(index, "cpp engine") == std::vector<int>{1, 2}));
    assert((processor.search(index, "search engine") == std::vector<int>{1, 3}));
    assert(processor.search(index, "cpp missing").empty());

    return 0;
}
