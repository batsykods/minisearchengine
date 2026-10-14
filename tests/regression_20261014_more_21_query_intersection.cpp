#include <cassert>
#include <string>
#include <vector>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(1,{"red","blue"}); i.addDocument(2,{"red"}); QueryProcessor q; assert((q.search(i,"red blue")==std::vector<int>{1})); return 0; }
