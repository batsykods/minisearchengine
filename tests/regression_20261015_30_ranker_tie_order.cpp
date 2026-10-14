#include <cassert>
#include "InvertedIndex.h"
#include "Ranker.h"
int main(){
 InvertedIndex i; i.addDocument(9, {"red"}); i.addDocument(2, {"red"}); Ranker r; auto v=r.tfidf(i,{"red"}); assert(v.size()==2 && v[0].documentId==2);
 return 0;
}
