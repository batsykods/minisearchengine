#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    for (int i = 0; i < 100; ++i) index.addDocument(i, {"common"}); assert(index.documentCount() == 100);
    return 0;
}
