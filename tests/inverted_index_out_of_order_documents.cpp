#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(9,{"x"}); i.addDocument(2,{"x"}); i.addDocument(5,{"x"}); assert((i.search("x")==std::vector<int>{2,5,9})); }
