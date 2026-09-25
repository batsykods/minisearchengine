#include "InvertedIndex.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(-7,{"a"});assert(x.documentCount()==1);assert(x.search("a").front()==-7);}