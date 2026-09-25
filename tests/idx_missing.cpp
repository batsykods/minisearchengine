#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"a"});assert(x.search("z").empty());assert(!x.contains("z"));}