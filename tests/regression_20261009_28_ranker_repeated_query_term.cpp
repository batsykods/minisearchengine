#include "Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"term"}); Ranker r; auto a=r.tfidf(i,{"term"}); auto b=r.tfidf(i,{"term","term"}); assert(a.size()==1 && b.size()==1 && b[0].score>a[0].score); }
