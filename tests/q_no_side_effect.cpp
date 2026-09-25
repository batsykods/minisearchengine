#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex x;QueryProcessor q;q.search(x,"missing");assert(x.termCount()==0);}