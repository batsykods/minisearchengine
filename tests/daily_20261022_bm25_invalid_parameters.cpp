#include "BM25Ranker.h"
#include <cassert>
#include <cmath>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); BM25Ranker r; assert(r.rank(i,{"alpha"},-1.0,0.75).empty()); assert(r.rank(i,{"alpha"},1.2,1.1).empty()); assert(r.rank(i,{"alpha"},NAN,0.75).empty()); }