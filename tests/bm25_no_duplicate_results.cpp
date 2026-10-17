#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"red","blue"}); BM25Ranker r; auto v=r.rank(i, {"red","blue"}); assert(v.size()==1); return 0; }
