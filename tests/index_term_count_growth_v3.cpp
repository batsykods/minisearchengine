#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() { InvertedIndex i; i.addDocument(1, {"alpha"}); assert(i.termCount()==1); i.addDocument(2, {"beta"}); assert(i.termCount()==2); }