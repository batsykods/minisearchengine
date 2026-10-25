#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(7, {"alpha"}); assert(index.search("alpha") == std::vector<int>{7});
    return 0;
}
