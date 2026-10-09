#include <cassert>
#include "IndexStats.h"
int main(){InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(2,{"b"}); assert(collectIndexStats(i).documents==2);}