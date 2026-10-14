#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(4,{"oak"}); i.addDocument(4,{"pine"}); assert(i.documentCount()==1); return 0; }
