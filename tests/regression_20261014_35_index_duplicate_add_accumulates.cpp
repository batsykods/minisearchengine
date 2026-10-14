#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); i.addDocument(1, {"alpha"}); assert(i.documentCount()==1 && i.termFrequency("alpha",1)==2);
    return 0;
}
