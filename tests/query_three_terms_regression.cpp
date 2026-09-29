#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","b","c"}); i.addDocument(2,{"a","b"}); assert((QueryProcessor{}.search(i,"a b c")==std::vector<int>{1})); }