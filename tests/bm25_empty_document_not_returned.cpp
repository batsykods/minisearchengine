#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {}); i.addDocument(2, {"x"}); BM25Ranker r; auto v=r.rank(i, {"x"}); assert(v.size()==1 && v[0].documentId==2); return 0; }
