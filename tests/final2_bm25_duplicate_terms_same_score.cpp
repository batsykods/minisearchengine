#include <cassert>
#include <cmath>
#include <cstddef>
#include "BM25Ranker.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","a"}); i.addDocument(2,{"a"}); BM25Ranker r; auto a=r.rank(i,{"a"}); auto b=r.rank(i,{"a","a"}); assert(a.size()==b.size()); for(std::size_t n=0;n<a.size();++n) assert(a[n].documentId==b[n].documentId && a[n].score==b[n].score); return 0; }
