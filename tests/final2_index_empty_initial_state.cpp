#include <cassert>
#include <cmath>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; assert(i.documentCount()==0 && i.termCount()==0 && i.totalTokenCount()==0 && i.averageDocumentLength()==0.0); return 0; }
