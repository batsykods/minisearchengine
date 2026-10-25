#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"alpha", "alpha"}); assert(index.documentFrequency("alpha") == 1);
    return 0;
}
