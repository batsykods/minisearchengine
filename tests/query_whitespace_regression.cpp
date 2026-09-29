#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","b"}); assert((QueryProcessor{}.search(i,"  a\t   b  ")==std::vector<int>{1})); }