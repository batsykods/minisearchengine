#include <cassert>
#include <cmath>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
#include "IndexStats.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","b"}); i.addDocument(2,{"b"}); auto s=collectIndexStats(i); assert(s.documents==2 && s.terms==2); return 0; }
