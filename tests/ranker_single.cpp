#include <cassert>
#include "Ranker.h"
int main(){InvertedIndex i; i.addDocument(1,{"search"}); Ranker r; auto x=r.tfidf(i,{"search"}); assert(x.size()==1); assert(x[0].documentId==1);return 0;}
