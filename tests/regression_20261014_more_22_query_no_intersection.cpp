#include <cassert>
#include <string>
#include <vector>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(1,{"red"}); i.addDocument(2,{"blue"}); QueryProcessor q; assert(q.search(i,"red blue").empty()); return 0; }
