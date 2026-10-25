#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(-1, {"a"}); assert(index.search("a") == std::vector<int>{-1});
    return 0;
}
