#include <cassert>
#include "Ranker.h"
int main(){InvertedIndex i; i.addDocument(1,{"cpp"}); Ranker r; auto x=r.tfidf(i,{"cpp","cpp"}); assert(x.size()==1);return 0;}
