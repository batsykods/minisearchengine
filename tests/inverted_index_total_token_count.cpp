#include <cassert>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    assert(index.totalTokenCount() == 0);
    assert(index.averageDocumentLength() == 0.0);

    index.addDocument(1, {"alpha", "beta", ""});
    assert(index.totalTokenCount() == 2);
    assert(index.averageDocumentLength() == 2.0);

    index.addDocument(2, {"gamma", "gamma"});
    assert(index.totalTokenCount() == 4);
    assert(index.averageDocumentLength() == 2.0);

    index.addDocument(1, {"delta"});
    assert(index.totalTokenCount() == 5);
    assert(index.averageDocumentLength() == 2.5);

    index.addDocument(3, {});
    assert(index.totalTokenCount() == 5);
    assert(index.averageDocumentLength() == 5.0 / 3.0);
    return 0;
}
