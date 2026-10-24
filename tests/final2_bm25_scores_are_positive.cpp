#include <cassert>
#include "BM25Ranker.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(2,{"b"}); auto r=BM25Ranker{}.rank(i,{"a"}); assert(r.size()==1 && r[0].score>0.0); return 0; }
