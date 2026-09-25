#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"cpp","cpp","search"}); assert(i.termFrequency("cpp",1)==2); assert(i.documentFrequency("cpp")==1); }
