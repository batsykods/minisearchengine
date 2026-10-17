#include <cassert>
#include "InvertedIndex.h"
int main() { InvertedIndex i; i.addDocument(1, {"a","b"}); assert(i.documentLength(1)==2 && i.totalTokenCount()==2 && i.averageDocumentLength()==2.0); return 0; }
