#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(5,{"alpha"}); assert((QueryProcessor{}.search(i,"alpha alpha alpha")==std::vector<int>{5})); }