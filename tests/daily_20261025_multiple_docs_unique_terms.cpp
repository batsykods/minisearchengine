#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"a", "b"}); index.addDocument(2, {"b", "c"}); assert(index.termCount() == 3);
    return 0;
}
