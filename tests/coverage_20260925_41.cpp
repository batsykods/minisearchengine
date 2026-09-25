#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha","beta"});i.addDocument(2,{"beta"});assert(i.documentCount()==2);return 0;}
