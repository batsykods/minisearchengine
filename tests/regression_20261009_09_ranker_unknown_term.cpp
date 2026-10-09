#include "Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"x"}); Ranker r; assert(r.tfidf(i,{"missing"}).empty()); }