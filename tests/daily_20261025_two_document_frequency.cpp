#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"alpha"}); index.addDocument(2, {"alpha"}); assert(index.documentFrequency("alpha") == 2);
    return 0;
}
