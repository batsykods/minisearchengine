#include <cassert>
#include "InvertedIndex.h"
int main() { InvertedIndex i; i.addDocument(1, {"a","","b"}); assert(i.documentLength(1)==2); return 0; }
