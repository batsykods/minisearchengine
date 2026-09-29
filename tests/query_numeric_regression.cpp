#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(4,{"2026","cpp"}); assert((QueryProcessor{}.search(i,"2026")==std::vector<int>{4})); }