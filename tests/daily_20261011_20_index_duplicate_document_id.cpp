#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(1,{"b"}); assert(i.documentCount()==1 && i.documentFrequency("a")==1 && i.documentFrequency("b")==1);
    return 0;
}
