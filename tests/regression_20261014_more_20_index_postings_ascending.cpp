#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main(){ InvertedIndex i; i.addDocument(9,{"oak"}); i.addDocument(1,{"oak"}); i.addDocument(5,{"oak"}); auto p=i.search("oak"); assert((p==std::vector<int>{1,5,9})); return 0; }
