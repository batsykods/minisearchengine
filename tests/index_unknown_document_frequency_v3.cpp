#include "InvertedIndex.h"
#include <cassert>
int main() { InvertedIndex i; i.addDocument(1, {"alpha"}); assert(i.termFrequency("alpha",99)==0); assert(i.documentFrequency("missing")==0); }