#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(4,{"x","x"});x.addDocument(4,{"x","x"});assert(x.documentCount()==1);assert(x.termFrequency("x",4)==4);}