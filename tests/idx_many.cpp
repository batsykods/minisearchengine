#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;for(int i=0;i<50;++i)x.addDocument(i,{"common",i%2?"odd":"even"});assert(x.documentCount()==50);assert(x.documentFrequency("odd")==25);}