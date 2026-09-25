#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha"});i.addDocument(2,{"alpha","alpha"});assert(i.documentFrequency("alpha")==2);return 0;}
