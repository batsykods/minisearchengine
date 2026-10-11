#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(-3,{"a"}); assert(i.search("a")==std::vector<int>{-3});
    return 0;
}
