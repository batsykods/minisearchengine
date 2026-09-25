#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"alpha","alpha","beta"});QueryProcessor q;assert((q.search(x,"alpha beta")==std::vector<int>{1}));}