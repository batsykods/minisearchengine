#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(3,{"42"}); assert((QueryProcessor{}.search(i,"42")==std::vector<int>{3})); }