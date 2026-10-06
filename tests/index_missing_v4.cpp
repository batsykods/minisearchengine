#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex i;i.addDocument(1,{"a"});assert(i.search("missing").empty()&&!i.contains("missing"));}