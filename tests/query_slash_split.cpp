#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(13,{"alpha beta"}); assert((QueryProcessor{}.search(i,"alpha/beta")==std::vector<int>{13})); }