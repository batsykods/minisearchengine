#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(8,{});assert(x.documentCount()==1);assert(x.termCount()==0);}