#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"alpha"}); assert(index.termFrequency("alpha", 404) == 0);
    return 0;
}
