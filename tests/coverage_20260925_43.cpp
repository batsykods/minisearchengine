#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha"});assert(i.termFrequency("omega",1)==0);return 0;}
