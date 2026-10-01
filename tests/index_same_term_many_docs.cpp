#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; for(int n=1;n<=5;++n)i.addDocument(n,{"a"}); assert(i.documentFrequency("a")==5); }