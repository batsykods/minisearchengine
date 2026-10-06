#include "InvertedIndex.h"
#include <cassert>
int main() { InvertedIndex i; i.addDocument(7, {"alpha","alpha","alpha","beta"}); assert(i.termFrequency("alpha",7)==3); assert(i.termFrequency("beta",7)==1); }