#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(7,{"alpha beta gamma"}); assert((QueryProcessor{}.search(i,"gamma beta alpha")==std::vector<int>{7})); }