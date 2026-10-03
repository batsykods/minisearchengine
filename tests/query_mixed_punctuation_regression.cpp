#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(4,{"alpha"}); assert((QueryProcessor{}.search(i,"a-l.p,h!a")==std::vector<int>{4})); }