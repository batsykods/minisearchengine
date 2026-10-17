#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"x"}); BM25Ranker r; auto v=r.rank(i, {"x"}, 0.0, 0.75); assert(v.size()==1 && v[0].score>0.0); return 0; }
