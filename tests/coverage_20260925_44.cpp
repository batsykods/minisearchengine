#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha"});assert(i.termFrequency("alpha",2)==0);return 0;}
