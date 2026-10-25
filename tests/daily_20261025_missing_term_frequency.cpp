#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"alpha"}); assert(index.termFrequency("beta", 1) == 0);
    return 0;
}
