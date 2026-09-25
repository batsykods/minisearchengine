#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"alpha","beta"});x.addDocument(2,{"alpha"});QueryProcessor q;assert((q.search(x,"alpha beta")==std::vector<int>{1}));}