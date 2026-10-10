#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"a","a","a"}); const auto& p=i.search("a"); assert(p.size()==1 && p[0]==1); assert(i.termFrequency("a",1)==3); }