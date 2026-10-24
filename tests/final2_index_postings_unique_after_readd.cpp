#include <cassert>
#include <cmath>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(2,{"x"}); i.addDocument(2,{"x","x"}); assert((i.search("x")==std::vector<int>{2}) && i.termFrequency("x",2)==3); return 0; }
