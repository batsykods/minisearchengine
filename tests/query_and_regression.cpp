#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(1,{"alpha","beta"}); i.addDocument(2,{"alpha"}); assert((QueryProcessor{}.search(i,"alpha beta")==std::vector<int>{1})); }