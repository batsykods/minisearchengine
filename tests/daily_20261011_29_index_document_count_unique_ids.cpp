#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(1,{"b"}); i.addDocument(2,{"c"}); assert(i.documentCount()==2);
    return 0;
}
