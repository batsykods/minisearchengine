#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(14,{"alpha beta"}); assert((QueryProcessor{}.search(i,"alpha_beta")==std::vector<int>{14})); }