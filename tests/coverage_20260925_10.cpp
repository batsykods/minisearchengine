#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(10,{"x","x","x","x","x"});assert(i.termFrequency("x",10)==5);return 0;}
