#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {}); assert(index.averageDocumentLength() == 0.0);
    return 0;
}
