#include <cassert>
#include <string>
#include <vector>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(8,{"alphabeta"}); QueryProcessor q; assert((q.search(i,"alpha-beta")==std::vector<int>{8})); return 0; }
