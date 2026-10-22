#include "BM25Ranker.h"
#include <cassert>
#include <cmath>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha","alpha"}); BM25Ranker r; auto v=r.rank(i,{"alpha"},0.0,0.75); assert(v.size()==1 && std::isfinite(v[0].score)); }