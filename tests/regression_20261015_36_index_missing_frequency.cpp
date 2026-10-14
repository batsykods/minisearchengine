#include <cassert>
#include "InvertedIndex.h"
int main(){
 InvertedIndex i; i.addDocument(1, {"red"}); assert(i.termFrequency("red",7)==0);
 return 0;
}
