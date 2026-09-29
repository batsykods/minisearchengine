#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(2,{"b"}); assert(i.search("a").size()==1&&i.search("a")[0]==1); assert(i.search("b").size()==1&&i.search("b")[0]==2); }