#include "BM25Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(9,{"shared"}); i.addDocument(3,{"shared"}); BM25Ranker r; auto v=r.rank(i,{"shared"}); assert(v.size()==2 && v[0].documentId==3 && v[1].documentId==9); }