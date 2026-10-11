#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(2,{"b"}); assert(i.search("a")==std::vector<int>{1} && i.search("b")==std::vector<int>{2});
    return 0;
}
