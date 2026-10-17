#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"x"}); i.addDocument(2, {"x","x"}); BM25Ranker r; auto a=r.rank(i, {"x"}); auto b=r.rank(i, {"x","x","x"}); assert(a.size()==b.size() && a[0].score==b[0].score); return 0; }
