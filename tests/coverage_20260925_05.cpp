#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(4,{"x","x"});i.addDocument(4,{"x"});assert(i.search("x").size()==1);return 0;}
