#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    InvertedIndex i; i.addDocument(4, {"a","a","a"}); assert(i.termFrequency("a",4)==3 && i.documentFrequency("a")==1);
    return 0;
}
