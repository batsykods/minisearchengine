#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex i;i.addDocument(1,{"a"});i.addDocument(2,{"b"});assert(i.termCount()==2&&i.documentCount()==2);}