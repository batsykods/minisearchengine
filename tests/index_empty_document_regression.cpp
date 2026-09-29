#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(7,{}); assert(i.documentCount()==1); assert(i.termCount()==0); }