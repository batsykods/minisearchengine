#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(2,{"a"}); assert(i.documentFrequency("a")==2); }