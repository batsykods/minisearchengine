#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(2,{"alpha","beta"}); assert((QueryProcessor{}.search(i," ALPHA beta ")==std::vector<int>{2})); }