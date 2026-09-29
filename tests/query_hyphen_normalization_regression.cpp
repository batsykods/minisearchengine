#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(1,{"search","engine"}); assert((QueryProcessor{}.search(i,"search-engine")==std::vector<int>{1})); }