#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"x","x"}); i.addDocument(2,{"x"}); i.addDocument(3,{"y"}); assert(i.documentFrequency("x")==2 && i.documentFrequency("y")==1); return 0; }
