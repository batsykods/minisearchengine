#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha"});i.addDocument(1,{"beta"});assert(i.documentCount()==1);return 0;}
