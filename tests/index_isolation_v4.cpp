#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex a,b;a.addDocument(1,{"a"});b.addDocument(2,{"b"});assert(a.search("b").empty()&&b.search("a").empty());}