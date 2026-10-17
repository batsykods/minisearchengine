#include <cassert>
#include "InvertedIndex.h"
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(5, {"x"}); i.addDocument(3, {"x"}); i.addDocument(8, {"x"}); BM25Ranker r; auto a=r.rank(i, {"x"}); auto b=r.rank(i, {"x"}); assert(a.size()==b.size()); for (std::size_t n=0;n<a.size();++n) assert(a[n].documentId==b[n].documentId); return 0; }
