#include <cassert>
#include "Ranker.h"
int main(){Ranker r; InvertedIndex i; auto x=r.tfidf(i,{"missing"}); assert(x.empty());return 0;}
