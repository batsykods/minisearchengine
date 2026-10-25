#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(3, {"alpha", "beta"}); assert(index.search("beta") == std::vector<int>{3});
    return 0;
}
