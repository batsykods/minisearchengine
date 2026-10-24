#include <cassert>
#include <cmath>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); assert(i.termFrequency("x",1)==0); return 0; }
