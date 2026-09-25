#include <cassert>
#include "QueryProcessor.h"
int main(){QueryProcessor q;auto r=q.search({},"ALPHA alpha");assert(r.empty());return 0;}
