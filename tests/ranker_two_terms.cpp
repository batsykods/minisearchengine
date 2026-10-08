#include <cassert>
#include "Ranker.h"
int main(){InvertedIndex i; i.addDocument(1,{"cpp","search"}); i.addDocument(2,{"cpp"}); Ranker r; auto x=r.tfidf(i,{"cpp","search"}); assert(x[0].documentId==1);return 0;}
