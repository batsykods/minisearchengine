#include <cassert>
#include "InvertedIndex.h"
int main() { InvertedIndex i; i.addDocument(1, {"a","b"}); i.addDocument(2, {"c","d","e","f"}); assert(i.averageDocumentLength()==3.0); return 0; }
