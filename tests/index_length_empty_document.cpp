#include <cassert>
#include "InvertedIndex.h"
int main() { InvertedIndex i; i.addDocument(1, {}); assert(i.documentLength(1)==0 && i.documentCount()==1 && i.averageDocumentLength()==0.0); return 0; }
