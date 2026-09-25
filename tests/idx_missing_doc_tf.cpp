#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"a"});assert(x.termFrequency("a",99)==0);}