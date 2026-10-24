#include <cassert>
#include <cmath>
#include <cstddef>
#include "BM25Ranker.h"
int main(){ InvertedIndex i; assert(BM25Ranker{}.rank(i,{"a"}).empty()); return 0; }
