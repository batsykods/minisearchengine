#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(4,{"search","search","search"}); assert(i.termFrequency("search",4)==3); }