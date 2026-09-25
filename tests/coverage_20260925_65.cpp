#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha","beta","gamma"});assert(i.termCount()==3);return 0;}
