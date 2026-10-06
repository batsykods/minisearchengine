#include "InvertedIndex.h"
#include <cassert>
int main() { InvertedIndex a,b; a.addDocument(1, {"alpha"}); b.addDocument(2, {"beta"}); assert(a.documentCount()==1 && b.documentCount()==1); assert(a.search("beta").empty()); assert(b.search("alpha").empty()); }