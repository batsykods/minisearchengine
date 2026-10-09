#include "QueryProcessor.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); QueryProcessor q; assert(q.search(i,"   ").empty()); }