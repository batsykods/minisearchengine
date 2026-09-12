#include "InvertedIndex.h"

#include <cassert>

int main() {
    InvertedIndex index;

    index.addDocument(7, {"alpha", "alpha", "alpha"});
    index.addDocument(7, {"alpha", "beta"});

    assert(index.search("alpha").size() == 1);
    assert(index.search("alpha").front() == 7);
    assert(index.search("beta").size() == 1);
    assert(index.search("beta").front() == 7);

    return 0;
}
