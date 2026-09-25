#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha"});assert(i.contains("alpha"));i.addDocument(2,{"beta"});assert(i.contains("beta"));return 0;}
