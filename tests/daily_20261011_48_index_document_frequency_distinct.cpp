#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"x","x"}); i.addDocument(2,{"x","x","x"}); assert(i.documentFrequency("x")==2);
    return 0;
}
