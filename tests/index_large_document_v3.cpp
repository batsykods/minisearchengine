#include "InvertedIndex.h"
#include <cassert>
int main() { InvertedIndex i; i.addDocument(2000000000, {"alpha"}); assert(i.documentCount()==1); assert(i.search("alpha").front()==2000000000); }