#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"a","b","c"});x.addDocument(2,{"a","b"});QueryProcessor q;assert((q.search(x,"a b c")==std::vector<int>{1}));}