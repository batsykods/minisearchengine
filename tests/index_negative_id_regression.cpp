#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(-2,{"a"}); i.addDocument(0,{"a"}); const auto&p=i.search("a"); assert((p==std::vector<int>{-2,0})); }