#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"a","b","a"}); i.addDocument(2,{"c"}); assert(i.termCount()==3); }