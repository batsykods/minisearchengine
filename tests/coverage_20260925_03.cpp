#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha"});assert(i.search("missing").empty());return 0;}
