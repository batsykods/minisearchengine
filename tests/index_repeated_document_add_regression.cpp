#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(3,{"a","b"}); i.addDocument(3,{"b","c"}); assert(i.documentCount()==1); assert(i.documentFrequency("b")==1); assert(i.termFrequency("b",3)==2); }