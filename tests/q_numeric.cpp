#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(5,{"2026"});QueryProcessor q;assert((q.search(x,"2026")==std::vector<int>{5}));}