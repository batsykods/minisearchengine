#include <cassert>
#include "InvertedIndex.h"
int main() { InvertedIndex i; i.addDocument(1, {"a"}); i.addDocument(2, {"b"}); i.addDocument(1, {"c"}); assert(i.totalTokenCount()==3); return 0; }
