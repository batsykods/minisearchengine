#include "BM25Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"target"}); i.addDocument(2,{"target","noise","noise","noise"}); BM25Ranker r; auto v=r.rank(i,{"target"}); assert(v.size()==2 && v[0].documentId==1); }