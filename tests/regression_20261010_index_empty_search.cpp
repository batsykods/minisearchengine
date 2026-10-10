#include "InvertedIndex.h"
#include <cassert>
int main(){ InvertedIndex i; assert(i.search("missing").empty()); assert(!i.contains("missing")); }