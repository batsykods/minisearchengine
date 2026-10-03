#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(2,{"alpha"}); assert((QueryProcessor{}.search(i,"alpha   ")==std::vector<int>{2})); }