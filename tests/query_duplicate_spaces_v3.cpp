#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(6,{"alpha beta"}); assert((QueryProcessor{}.search(i,"alpha    beta")==std::vector<int>{6})); }