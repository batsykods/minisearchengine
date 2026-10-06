#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex i;i.addDocument(9,{"a"});i.addDocument(2,{"a"});assert(i.search("a").size()==2&&i.search("a")[0]==2&&i.search("a")[1]==9);}