#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"alpha", "beta"}); assert(index.documentLength(1) == 2);
    return 0;
}
