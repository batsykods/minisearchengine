#include <cassert>
#include "InvertedIndex.h"
#include "QueryProcessor.h"
int main(){
 InvertedIndex i; i.addDocument(9, {"hello"}); i.addDocument(2, {"hello"}); QueryProcessor q; auto r=q.search(i,"hello"); assert(r.size()==2 && r[0]==2 && r[1]==9);
 return 0;
}
