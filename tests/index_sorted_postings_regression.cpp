#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(5,{"a"}); i.addDocument(1,{"a"}); i.addDocument(3,{"a"}); const auto&p=i.search("a"); assert((p==std::vector<int>{1,3,5})); }