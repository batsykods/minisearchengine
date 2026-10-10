#include "Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); Ranker r; assert(r.tfidf(i,{}).empty()); }