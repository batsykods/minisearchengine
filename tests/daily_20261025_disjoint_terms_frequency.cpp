#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"a"}); index.addDocument(2, {"b"}); assert(index.documentFrequency("a") == 1);
    return 0;
}
