#include <cassert>
#include <cmath>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(-7,{"term"}); assert(i.search("term").size()==1 && i.search("term")[0]==-7); return 0; }
