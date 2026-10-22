#include "BM25Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); BM25Ranker r; assert(r.rank(i,{"missing"}).empty()); }