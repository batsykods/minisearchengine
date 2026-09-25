#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(100,{"x"});x.addDocument(1000000,{"x"});assert(x.documentFrequency("x")==2);}