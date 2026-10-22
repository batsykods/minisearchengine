#include "BM25Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); BM25Ranker r; auto a=r.rank(i,{"alpha"}); auto b=r.rank(i,{"alpha","alpha"}); assert(a.size()==1 && b.size()==1 && a[0].score==b[0].score); }