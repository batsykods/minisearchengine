#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha","alpha","alpha"});assert(i.documentFrequency("alpha")==1);return 0;}
