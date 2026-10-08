#include <cassert>
#include "Ranker.h"
int main(){InvertedIndex i; i.addDocument(1,{"cpp"}); Ranker r; auto x=r.tfidf(i,{"unknown"}); assert(x.empty());return 0;}
