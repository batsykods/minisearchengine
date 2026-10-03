#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(3,{"alpha"}); assert((QueryProcessor{}.search(i,"AlPhA")==std::vector<int>{3})); }