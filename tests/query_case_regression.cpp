#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(1,{"search"}); assert((QueryProcessor{}.search(i,"SEARCH")==std::vector<int>{1})); }