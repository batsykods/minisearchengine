#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(9,{"a"}); i.addDocument(2,{"a"}); i.addDocument(5,{"a"}); assert((QueryProcessor{}.search(i,"a")==std::vector<int>{2,5,9})); }