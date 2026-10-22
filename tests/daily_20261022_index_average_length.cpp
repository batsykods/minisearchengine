#include "InvertedIndex.h"
#include <cassert>
#include <cmath>
int main(){ InvertedIndex i; assert(i.averageDocumentLength()==0.0); i.addDocument(1,{"a","b"}); i.addDocument(2,{"c","d","e","f"}); assert(std::abs(i.averageDocumentLength()-3.0)<1e-9); }