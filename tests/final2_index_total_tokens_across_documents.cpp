#include <cassert>
#include <cmath>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","b"}); i.addDocument(2,{"c","c","d"}); assert(i.totalTokenCount()==5); return 0; }
