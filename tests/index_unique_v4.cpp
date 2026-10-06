#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex i;i.addDocument(1,{"a","a"});i.addDocument(1,{"a"});assert(i.search("a").size()==1);}