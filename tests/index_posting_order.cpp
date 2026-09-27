#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(3,{"x"}); i.addDocument(1,{"x"}); i.addDocument(2,{"x"}); const auto& p=i.search("x"); assert(p.size()==3); assert(p[0]==3 && p[1]==1 && p[2]==2); }