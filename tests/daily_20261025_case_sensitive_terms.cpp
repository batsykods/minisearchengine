#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"Alpha", "alpha"}); assert(index.termCount() == 2);
    return 0;
}
