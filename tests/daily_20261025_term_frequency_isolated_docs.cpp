#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"a", "a"}); index.addDocument(2, {"a"}); assert(index.termFrequency("a", 2) == 1);
    return 0;
}
