#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"x","x"}); i.addDocument(2,{"x"}); assert(i.termFrequency("x",1)==2); assert(i.termFrequency("x",2)==1); }
