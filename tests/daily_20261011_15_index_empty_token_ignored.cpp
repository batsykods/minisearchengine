#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    InvertedIndex i; i.addDocument(1, {"", "alpha"}); assert(i.termCount()==1 && i.termFrequency("alpha",1)==1);
    return 0;
}
