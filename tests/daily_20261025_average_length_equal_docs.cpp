#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"a", "b"}); index.addDocument(2, {"c", "d"}); assert(index.averageDocumentLength() == 2.0);
    return 0;
}
