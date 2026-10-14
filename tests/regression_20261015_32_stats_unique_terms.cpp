#include <cassert>
#include "IndexStats.h"
int main(){
 InvertedIndex i; i.addDocument(1, {"red","blue","red"}); auto s=collectIndexStats(i); assert(s.documents==1 && s.terms==2);
 return 0;
}
