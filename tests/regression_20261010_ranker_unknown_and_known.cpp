#include "Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); Ranker r; auto v=r.tfidf(i,{"missing","alpha"}); assert(v.size()==1 && v[0].documentId==1); }