#include "Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); i.addDocument(2,{"beta"}); Ranker r; auto v=r.tfidf(i,{"alpha","beta"}); assert(v.size()==2); }