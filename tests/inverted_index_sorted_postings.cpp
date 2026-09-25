#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(3,{"x"}); i.addDocument(1,{"x"}); i.addDocument(2,{"x"}); assert((i.search("x")==std::vector<int>{1,2,3})); }
