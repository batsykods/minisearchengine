#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha"});i.addDocument(2,{"beta"});assert(i.search("alpha").size()==1);assert(i.search("beta").size()==1);return 0;}
