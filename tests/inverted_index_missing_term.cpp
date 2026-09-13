#include "InvertedIndex.h"
#include <cassert>

int main() {
    InvertedIndex index;
    index.addDocument(7, {"search", "engine"});

    assert(!index.contains("missing"));
    assert(index.search("missing").empty());
    assert(index.contains("search"));
    return 0;
}
