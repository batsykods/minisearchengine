#include <cassert>
#include "InvertedIndex.h"
int main() { InvertedIndex i; i.addDocument(1, {"a"}); i.addDocument(2, {"b","c","d"}); assert(i.totalTokenCount()==4 && i.averageDocumentLength()==2.0); return 0; }
