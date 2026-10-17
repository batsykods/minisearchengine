#include <cassert>
#include "InvertedIndex.h"
int main() { InvertedIndex i; i.addDocument(1, {"a","a","a"}); assert(i.documentLength(1)==3); return 0; }
