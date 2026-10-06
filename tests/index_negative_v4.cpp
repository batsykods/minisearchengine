#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex i;i.addDocument(-5,{"a"});assert(i.documentCount()==1&&i.search("a")[0]==-5);}