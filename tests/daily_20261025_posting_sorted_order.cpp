#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(9, {"alpha"}); index.addDocument(2, {"alpha"}); assert((index.search("alpha") == std::vector<int>{2, 9}));
    return 0;
}
