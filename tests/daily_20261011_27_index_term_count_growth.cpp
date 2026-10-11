#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(2,{"b"}); i.addDocument(3,{"c"}); assert(i.termCount()==3);
    return 0;
}
