#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(8,{"search","engine"});QueryProcessor q;assert((q.search(x,"SEARCH, ENGINE!")==std::vector<int>{8}));}