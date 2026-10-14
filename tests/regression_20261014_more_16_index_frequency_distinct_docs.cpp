#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(1,{"oak"}); i.addDocument(2,{"oak"}); assert(i.documentFrequency("oak")==2); return 0; }
