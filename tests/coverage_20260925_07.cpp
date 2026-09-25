#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(-3,{"x"});assert(i.documentFrequency("x")==1&&i.termFrequency("x",-3)==1);return 0;}
