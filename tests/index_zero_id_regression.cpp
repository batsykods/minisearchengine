#include <cassert>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(0,{"zero"}); assert(i.documentCount()==1); assert(i.search("zero").at(0)==0); }