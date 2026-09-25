#include <cassert>
#include "QueryProcessor.h"
int main(){QueryProcessor q;auto r=q.search({},"ALPHA");assert(r.empty());return 0;}
