#include <cassert>
#include <string>
#include <vector>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(8,{"red"}); i.addDocument(3,{"red"}); QueryProcessor q; assert((q.search(i,"red")==std::vector<int>{3,8})); return 0; }
