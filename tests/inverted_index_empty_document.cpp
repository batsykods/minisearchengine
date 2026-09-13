#include "InvertedIndex.h"
#include <cassert>

int main() {
    InvertedIndex index;
    index.addDocument(5, {});
    index.addDocument(6, {"", "", ""});

    assert(index.termCount() == 0);
    assert(index.search("anything").empty());
    return 0;
}
