#include <cassert>

#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    assert(index.documentCount() == 0);

    index.addDocument(1, {"search", "engine"});
    index.addDocument(2, {"search"});
    index.addDocument(1, {"search"});

    assert(index.documentCount() == 2);
    return 0;
}
