#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"oak","oak","oak"}); assert(i.search("oak").size()==1); return 0; }
