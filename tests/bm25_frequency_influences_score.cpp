#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"x","x","x"}); i.addDocument(2, {"x"}); BM25Ranker r; auto v=r.rank(i, {"x"}); assert(v.size()==2 && v[0].documentId==1); return 0; }
