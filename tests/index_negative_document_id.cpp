#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(-4,{"alpha"}); assert(i.documentCount()==1); assert(i.contains("alpha")); }