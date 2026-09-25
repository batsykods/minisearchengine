#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha","beta"});assert(i.termCount()==2);return 0;}
