#include <cassert>
#include "BM25Ranker.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); auto results=BM25Ranker{}.rank(i,{}); assert(results.empty()); return 0; }
