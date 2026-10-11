#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    InvertedIndex i; i.addDocument(9,{"a"}); i.addDocument(2,{"a"}); i.addDocument(5,{"a"}); assert((i.search("a")==std::vector<int>{2,5,9}));
    return 0;
}
