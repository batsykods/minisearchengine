#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(1,{"a"}); assert(i.search("a").size()==1); assert(i.documentFrequency("a")==1); assert(i.termFrequency("a",1)==2); }