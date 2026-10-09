#include "QueryProcessor.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); i.addDocument(2,{"beta"}); QueryProcessor q; assert(q.search(i,"alpha beta").empty()); }