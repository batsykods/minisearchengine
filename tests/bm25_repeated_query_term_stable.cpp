#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"term"}); BM25Ranker r; auto a=r.rank(i, {"term"}); auto b=r.rank(i, {"term","term"}); assert(a.size()==b.size() && a[0].score==b[0].score); return 0; }
