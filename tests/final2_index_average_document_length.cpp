#include <cassert>
#include <cmath>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(2,{"b","c","d"}); assert(std::abs(i.averageDocumentLength()-2.0)<1e-12); return 0; }
