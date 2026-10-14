#include <cassert>
#include <string>
#include <vector>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(8,{"hello"}); QueryProcessor q; assert((q.search(i,"HELLO")==std::vector<int>{8})); return 0; }
