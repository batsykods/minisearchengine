#include <cassert>
#include "InvertedIndex.h"
#include "QueryProcessor.h"
int main(){
 InvertedIndex i; i.addDocument(1, {"red","blue"}); i.addDocument(2, {"red"}); QueryProcessor q; auto r=q.search(i,"red blue"); assert(r.size()==1 && r[0]==1);
 return 0;
}
