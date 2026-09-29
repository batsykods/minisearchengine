#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","b"}); QueryProcessor q; q.search(i,"a b"); q.search(i,"b"); assert(i.documentCount()==1&&i.termCount()==2); }