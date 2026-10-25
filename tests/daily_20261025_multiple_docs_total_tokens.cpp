#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"a", "b"}); index.addDocument(2, {"c"}); assert(index.totalTokenCount() == 3);
    return 0;
}
