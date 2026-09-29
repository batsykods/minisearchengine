#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); assert(!i.contains("missing")); assert(i.search("missing").empty()); assert(i.documentFrequency("missing")==0); assert(i.termFrequency("missing",1)==0); }