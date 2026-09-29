#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","b"}); i.addDocument(2,{"a"}); assert((QueryProcessor{}.search(i,"a a b")==std::vector<int>{1})); }