#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"a","a","b"}); assert(i.documentLength(1)==3); assert(i.documentLength(9)==0); }