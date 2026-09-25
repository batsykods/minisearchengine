#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"a"});x.addDocument(2,{"b"});assert(x.termFrequency("a",2)==0);}