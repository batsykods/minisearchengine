#include <cassert>
#include "Ranker.h"
int main(){InvertedIndex i; i.addDocument(1,{"cpp"}); i.addDocument(2,{"search"}); Ranker r; auto x=r.tfidf(i,{"cpp"}); assert(x.size()==1); assert(x[0].documentId==1);return 0;}
