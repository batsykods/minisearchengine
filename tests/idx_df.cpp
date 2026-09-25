#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"a","a"});x.addDocument(2,{"a"});assert(x.documentFrequency("a")==2);}