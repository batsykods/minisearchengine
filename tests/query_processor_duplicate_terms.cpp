#include "InvertedIndex.h"
#include "QueryProcessor.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"cpp","search"}); QueryProcessor q; assert(q.search(i,"cpp cpp")==std::vector<int>{1}); }
