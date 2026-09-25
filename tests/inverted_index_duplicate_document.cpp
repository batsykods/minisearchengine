#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"x","x"}); assert(i.documentFrequency("x")==1); assert(i.termFrequency("x",1)==2); }
