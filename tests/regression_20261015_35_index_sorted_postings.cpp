#include <cassert>
#include "InvertedIndex.h"
int main(){
 InvertedIndex i; i.addDocument(9, {"red"}); i.addDocument(2, {"red"}); auto p=i.search("red"); assert(p[0]==2 && p[1]==9);
 return 0;
}
