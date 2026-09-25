#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(8,{"alpha"});i.addDocument(3,{"alpha"});auto&p=i.search("alpha");assert(p.size()==2&&p[0]==3&&p[1]==8);return 0;}
