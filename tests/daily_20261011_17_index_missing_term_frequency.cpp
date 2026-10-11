#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    InvertedIndex i; i.addDocument(1,{"a"}); assert(i.termFrequency("missing",1)==0);
    return 0;
}
