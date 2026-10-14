#include <cassert>
#include <string>
#include <vector>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(8,{"red"}); QueryProcessor q; assert(q.search(i,"red unknown").empty()); return 0; }
