#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"x", "x"}); index.addDocument(2, {"x", "x", "x"}); assert(index.termFrequency("x", 2) == 3);
    return 0;
}
