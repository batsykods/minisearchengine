#include <cassert>
#include "InvertedIndex.h"
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"x"}); i.addDocument(2, {"x","filler","filler","filler","filler"}); BM25Ranker r; auto v=r.rank(i, {"x"}); assert(v.size()==2 && v[0].documentId==1); return 0; }
