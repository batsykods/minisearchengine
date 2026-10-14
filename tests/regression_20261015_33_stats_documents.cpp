#include <cassert>
#include "IndexStats.h"
int main(){
 InvertedIndex i; i.addDocument(1, {"red"}); i.addDocument(2, {"blue"}); auto s=collectIndexStats(i); assert(s.documents==2);
 return 0;
}
