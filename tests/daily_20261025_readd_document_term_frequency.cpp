#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"a"}); index.addDocument(1, {"a"}); assert(index.termFrequency("a", 1) == 2);
    return 0;
}
