#include <cassert>
#include "IndexStats.h"
int main(){InvertedIndex i; i.addDocument(1,{"a","a"}); assert(collectIndexStats(i).terms==1);}