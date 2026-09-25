#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"a","b","a"});x.addDocument(2,{"b"});assert(x.termCount()==2);}