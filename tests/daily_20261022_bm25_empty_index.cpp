#include "BM25Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; BM25Ranker r; assert(r.rank(i,{"alpha"}).empty()); }