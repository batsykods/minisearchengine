#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); i.addDocument(2, {"alpha"}); i.addDocument(3, {"beta"}); assert(i.documentFrequency("alpha")==2);
    return 0;
}
