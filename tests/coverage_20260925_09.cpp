#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"z"});i.addDocument(2,{"z"});assert(i.documentFrequency("z")==2);return 0;}
