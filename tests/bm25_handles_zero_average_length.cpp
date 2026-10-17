#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {}); BM25Ranker r; assert(r.rank(i, {"x"}).empty()); return 0; }
