#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(0,{"a"}); assert(i.search("a")==std::vector<int>{0} && i.documentCount()==1);
    return 0;
}
