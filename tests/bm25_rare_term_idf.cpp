#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"rare","common"}); i.addDocument(2, {"common"}); i.addDocument(3, {"common"}); BM25Ranker r; auto a=r.rank(i, {"rare"}); auto b=r.rank(i, {"common"}); assert(a.size()==1 && b.size()==3 && a[0].score>b[0].score); return 0; }
