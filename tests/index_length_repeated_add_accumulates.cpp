#include <cassert>
#include "InvertedIndex.h"
int main() { InvertedIndex i; i.addDocument(1, {"a"}); i.addDocument(1, {"b","c"}); assert(i.documentLength(1)==3 && i.documentCount()==1); return 0; }
