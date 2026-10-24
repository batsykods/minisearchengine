#include <cassert>
#include <cmath>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(8,{"x"}); i.addDocument(2,{"x"}); i.addDocument(5,{"x"}); assert((i.search("x")==std::vector<int>{2,5,8})); return 0; }
