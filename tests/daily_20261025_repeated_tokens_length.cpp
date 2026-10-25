#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"x", "x", "x"}); assert(index.documentLength(1) == 3);
    return 0;
}
