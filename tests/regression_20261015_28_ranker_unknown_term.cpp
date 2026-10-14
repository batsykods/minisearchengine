#include <cassert>
#include "InvertedIndex.h"
#include "Ranker.h"
int main(){
 InvertedIndex i; i.addDocument(1, {"red"}); Ranker r; assert(r.tfidf(i,{"missing"}).empty());
 return 0;
}
