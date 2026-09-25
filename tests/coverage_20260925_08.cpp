#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{});assert(i.documentCount()==1&&i.termCount()==0);return 0;}
