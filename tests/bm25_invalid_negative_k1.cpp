#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; i.addDocument(1, {"x"}); BM25Ranker r; assert(r.rank(i, {"x"}, -1.0, 0.75).empty()); return 0; }
