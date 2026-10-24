#include <cassert>
#include <cmath>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); assert(i.contains("alpha") && !i.contains("beta")); return 0; }
