#include <cassert>
#include "InvertedIndex.h"
#include "Ranker.h"
int main(){
 InvertedIndex i; i.addDocument(1, {"red"}); i.addDocument(2, {"red","red"}); Ranker r; auto v=r.tfidf(i,{"red"}); assert(v.size()==2 && v[0].documentId==2);
 return 0;
}
