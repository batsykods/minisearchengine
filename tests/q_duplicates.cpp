#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(7,{"alpha"});QueryProcessor q;assert((q.search(x,"alpha alpha")==std::vector<int>{7}));}