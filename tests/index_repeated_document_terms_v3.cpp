#include "InvertedIndex.h"
#include <cassert>
int main() { InvertedIndex i; i.addDocument(5, {"a","b","a","c","b"}); assert(i.termFrequency("a",5)==2); assert(i.termFrequency("b",5)==2); assert(i.documentFrequency("a")==1); }