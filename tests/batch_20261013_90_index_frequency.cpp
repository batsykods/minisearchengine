#include <cassert>
#include <vector>
#include <string>
#include "InvertedIndex.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"x","x","x"}); assert(i.termFrequency("x",1)==3);
    return 0;
}
