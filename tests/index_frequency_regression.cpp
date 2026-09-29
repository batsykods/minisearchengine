#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","a","a","b"}); i.addDocument(2,{"a"}); assert(i.termFrequency("a",1)==3); assert(i.termFrequency("a",2)==1); assert(i.documentFrequency("a")==2); }