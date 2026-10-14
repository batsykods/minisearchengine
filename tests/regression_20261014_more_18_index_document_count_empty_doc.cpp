#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(4,{}); assert(i.documentCount()==1 && i.termCount()==0); return 0; }
