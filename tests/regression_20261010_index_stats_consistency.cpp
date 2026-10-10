#include "IndexStats.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"a","a","b"}); i.addDocument(2,{"b","c"}); auto s=collectIndexStats(i); assert(s.documents==i.documentCount()); assert(s.terms==i.termCount()); }