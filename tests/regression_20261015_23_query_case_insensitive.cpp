#include <cassert>
#include "InvertedIndex.h"
#include "QueryProcessor.h"
int main(){
 InvertedIndex i; i.addDocument(1, {"hello"}); QueryProcessor q; assert(q.search(i,"HELLO").size()==1);
 return 0;
}
