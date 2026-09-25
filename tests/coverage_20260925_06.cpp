#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(2,{"x"});i.addDocument(1,{"x"});const auto&p=i.search("x");assert(p.size()==2&&p[0]==1&&p[1]==2);return 0;}
