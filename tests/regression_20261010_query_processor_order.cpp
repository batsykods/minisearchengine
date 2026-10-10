#include "QueryProcessor.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(4,{"alpha","beta"}); i.addDocument(2,{"alpha","beta"}); QueryProcessor q; auto r=q.search(i,"beta alpha"); assert((r==std::vector<int>{2,4})); }