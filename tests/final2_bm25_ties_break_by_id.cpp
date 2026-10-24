#include <cassert>
#include "BM25Ranker.h"
int main(){ InvertedIndex i; i.addDocument(9,{"a"}); i.addDocument(2,{"a"}); auto r=BM25Ranker{}.rank(i,{"a"}); assert(r.size()==2 && r[0].documentId==2 && r[1].documentId==9); return 0; }
