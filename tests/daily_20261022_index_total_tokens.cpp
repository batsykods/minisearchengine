#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"a","b"}); i.addDocument(2,{"c"}); assert(i.totalTokenCount()==3); }