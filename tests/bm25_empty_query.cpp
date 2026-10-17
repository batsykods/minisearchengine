#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"term"}); BM25Ranker r; assert(r.rank(i, {}).empty()); return 0; }
