#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(7, {"term"}); BM25Ranker r; auto v=r.rank(i, {"term"}); assert(v.size()==1 && v[0].documentId==7); return 0; }
