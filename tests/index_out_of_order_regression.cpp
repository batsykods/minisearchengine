#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(10,{"x"}); i.addDocument(2,{"x"}); i.addDocument(7,{"x"}); assert((i.search("x")==std::vector<int>{2,7,10})); }