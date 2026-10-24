#include <cassert>
#include <cmath>
#include <cstddef>
#include "BM25Ranker.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); assert(BM25Ranker{}.rank(i,{"a"},std::nan(""),0.75).empty()); return 0; }
