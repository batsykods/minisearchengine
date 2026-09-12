#include "InvertedIndex.h"

#include <cassert>

int main() {
    InvertedIndex index;
    index.addDocument(3, {"", "alpha", "", "beta"});

    assert(index.termCount() == 2);
    assert(index.search("").empty());
    assert(index.search("alpha").size() == 1);
    assert(index.search("beta").size() == 1);

    return 0;
}
