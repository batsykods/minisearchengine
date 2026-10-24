#include <cassert>
#include <cmath>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","b"}); i.addDocument(2,{}); assert(std::abs(i.averageDocumentLength()-1.0)<1e-12); return 0; }
