#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"alpha", "alpha"}); assert(index.termFrequency("alpha", 1) == 2);
    return 0;
}
