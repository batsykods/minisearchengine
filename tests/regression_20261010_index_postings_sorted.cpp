#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(9,{"term"}); i.addDocument(2,{"term"}); i.addDocument(5,{"term"}); const auto& p=i.search("term"); assert((p==std::vector<int>{2,5,9})); }