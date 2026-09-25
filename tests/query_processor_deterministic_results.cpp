#include "InvertedIndex.h"
#include "QueryProcessor.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(2,{"a","b"}); i.addDocument(1,{"a","b"}); QueryProcessor q; assert((q.search(i,"b a")==std::vector<int>{1,2})); }
