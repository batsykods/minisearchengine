#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"x","x"}); i.addDocument(2,{"x"}); assert(i.termFrequency("x",1)==2 && i.termFrequency("x",2)==1);
    return 0;
}
