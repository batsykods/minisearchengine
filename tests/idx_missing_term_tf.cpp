#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"a"});assert(x.termFrequency("b",1)==0);}