#include <cassert>
#include "InvertedIndex.h"
int main(){
 InvertedIndex i; i.addDocument(1, {"red","red"}); assert(i.termFrequency("red",1)==2);
 return 0;
}
