#include <cassert>
#include <cmath>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a","a","b"}); assert(i.termCount()==2); return 0; }
