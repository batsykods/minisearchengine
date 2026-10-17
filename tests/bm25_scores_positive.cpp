#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"term"}); BM25Ranker r; auto v=r.rank(i, {"term"}); assert(v.size()==1 && v[0].score>0.0); return 0; }
