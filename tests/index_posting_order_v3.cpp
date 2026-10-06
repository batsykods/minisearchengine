#include "InvertedIndex.h"
#include <cassert>
#include <vector>
int main() { InvertedIndex i; i.addDocument(9, {"x"}); i.addDocument(2, {"x"}); i.addDocument(7, {"x"}); assert((i.search("x"))==std::vector<int>({2,7,9})); }