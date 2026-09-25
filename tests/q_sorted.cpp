#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(10,{"x"});x.addDocument(3,{"x"});x.addDocument(7,{"x"});QueryProcessor q;assert((q.search(x,"x")==std::vector<int>{3,7,10}));}