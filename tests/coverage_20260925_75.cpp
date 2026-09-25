#include <cassert>
#include "QueryProcessor.h"
int main(){QueryProcessor q;auto r=q.search({},"one two three four five");assert(r.empty());return 0;}
