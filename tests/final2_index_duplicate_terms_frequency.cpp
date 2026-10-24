#include <cassert>
#include <cmath>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","a","a"}); assert(i.termFrequency("a",1)==3); return 0; }
