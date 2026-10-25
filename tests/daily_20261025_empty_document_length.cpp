#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {}); assert(index.documentLength(1) == 0);
    return 0;
}
