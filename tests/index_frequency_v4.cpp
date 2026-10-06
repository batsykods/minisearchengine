#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex i;i.addDocument(1,{"a","a","b"});assert(i.termFrequency("a",1)==2&&i.documentFrequency("a")==1);}