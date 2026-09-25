#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(7,{"alpha","alpha"});assert(i.termFrequency("alpha",7)==2);return 0;}
