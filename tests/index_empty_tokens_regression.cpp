#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"","a",""}); assert(i.termCount()==1); assert(i.search("").empty()); }