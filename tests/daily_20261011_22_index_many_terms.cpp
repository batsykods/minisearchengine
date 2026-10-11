#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"a","b","c","d"}); assert(i.termCount()==4);
    return 0;
}
