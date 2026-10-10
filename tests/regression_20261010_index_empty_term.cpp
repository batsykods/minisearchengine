#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"","alpha",""}); assert(!i.contains("")); assert(i.termCount()==1); }