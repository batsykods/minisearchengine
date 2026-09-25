#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(9,{"x"});x.addDocument(2,{"x"});x.addDocument(5,{"x"});assert((x.search("x")==std::vector<int>{2,5,9}));}