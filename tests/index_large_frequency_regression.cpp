#include <cassert>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; std::vector<std::string> t(1000,"a"); i.addDocument(1,t); assert(i.termFrequency("a",1)==1000); }