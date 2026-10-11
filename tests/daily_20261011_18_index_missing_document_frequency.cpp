#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    InvertedIndex i; i.addDocument(1,{"a"}); assert(i.termFrequency("a",99)==0);
    return 0;
}
