#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"cpp","cpp"}); i.addDocument(1,{"cpp"}); assert(i.documentCount()==1); assert(i.documentFrequency("cpp")==1); }