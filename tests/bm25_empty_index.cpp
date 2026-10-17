#include <cassert>
#include "BM25Ranker.h"
int main() { InvertedIndex i; BM25Ranker r; assert(r.rank(i, {"term"}).empty()); return 0; }
