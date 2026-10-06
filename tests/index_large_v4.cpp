#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex i;i.addDocument(2000000000,{"a"});assert(i.search("a")[0]==2000000000);}