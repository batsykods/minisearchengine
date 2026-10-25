#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"a", "a", "a"}); assert(index.search("a").size() == 1);
    return 0;
}
