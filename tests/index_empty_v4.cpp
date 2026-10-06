#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex i;i.addDocument(1,{"","a",""});assert(i.termCount()==1&&!i.contains(""));}