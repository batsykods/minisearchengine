#include "Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"x"}); i.addDocument(2,{"x","x"}); Ranker r; auto v=r.tfidf(i,{"x"}); assert(v.size()==2 && v[0].documentId==2 && v[0].score>v[1].score); }