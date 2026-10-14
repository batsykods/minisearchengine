#include <cassert>
#include <string>
#include <vector>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(8,{"c17"}); QueryProcessor q; assert((q.search(i,"C++17")==std::vector<int>{8})); return 0; }
