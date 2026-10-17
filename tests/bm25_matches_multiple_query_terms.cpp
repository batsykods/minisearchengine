#include <cassert>
#include "InvertedIndex.h"
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"red","blue"}); i.addDocument(2, {"red"}); BM25Ranker r; auto v=r.rank(i, {"red","blue"}); assert(v.size()==2 && v[0].documentId==1); return 0; }
