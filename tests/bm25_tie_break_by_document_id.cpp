#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(9, {"x"}); i.addDocument(2, {"x"}); BM25Ranker r; auto v=r.rank(i, {"x"}); assert(v.size()==2 && v[0].documentId==2 && v[1].documentId==9); return 0; }
