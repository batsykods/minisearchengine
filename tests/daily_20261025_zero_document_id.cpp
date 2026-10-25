#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(0, {"a"}); assert(index.search("a") == std::vector<int>{0});
    return 0;
}
