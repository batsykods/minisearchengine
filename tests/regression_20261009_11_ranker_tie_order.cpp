#include "Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(8,{"x"}); i.addDocument(3,{"x"}); Ranker r; auto v=r.tfidf(i,{"x"}); assert(v.size()==2 && v[0].documentId==3 && v[1].documentId==8); }