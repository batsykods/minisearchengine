#include <cassert>
#include "InvertedIndex.h"
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"x"}); BM25Ranker r; auto a=r.rank(i, {"x"}); auto b=r.rank(i, {"x"}, 1.2, 0.75); assert(a.size()==b.size() && a[0].score==b[0].score); return 0; }
