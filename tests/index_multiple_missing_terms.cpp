#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); assert(i.search("b").empty()); assert(i.search("c").empty()); }