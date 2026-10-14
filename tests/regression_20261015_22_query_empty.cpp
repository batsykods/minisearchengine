#include <cassert>
#include "InvertedIndex.h"
#include "QueryProcessor.h"
int main(){
 InvertedIndex i; i.addDocument(1, {"red"}); QueryProcessor q; assert(q.search(i,"").empty());
 return 0;
}
