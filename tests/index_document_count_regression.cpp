#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(2,{"b"}); assert(i.documentCount()==2); }