#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(11,{"alpha 2026"}); assert((QueryProcessor{}.search(i,"ALPHA 2026")==std::vector<int>{11})); }