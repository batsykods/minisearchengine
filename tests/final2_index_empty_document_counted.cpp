#include <cassert>
#include <cmath>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{}); assert(i.documentCount()==1 && i.documentLength(1)==0); return 0; }
