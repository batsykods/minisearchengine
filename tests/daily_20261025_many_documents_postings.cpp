#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    for (int i = 0; i < 100; ++i) index.addDocument(i, {"common"}); assert(index.search("common").size() == 100);
    return 0;
}
