#include "InvertedIndex.h"
#include <cassert>
int main() { InvertedIndex i; i.addDocument(1, {"alpha","beta"}); i.addDocument(2, {"alpha"}); assert(i.documentFrequency("alpha")==2); assert(i.documentFrequency("beta")==1); }