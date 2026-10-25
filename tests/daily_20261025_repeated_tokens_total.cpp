#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"x", "x", "x"}); assert(index.totalTokenCount() == 3);
    return 0;
}
