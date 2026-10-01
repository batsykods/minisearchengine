#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","b","c"}); assert(i.termCount()==3); }