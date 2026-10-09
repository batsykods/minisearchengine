#include "Ranker.h"
#include <cassert>
int main(){ InvertedIndex i; Ranker r; assert(r.tfidf(i,{"x"}).empty()); }