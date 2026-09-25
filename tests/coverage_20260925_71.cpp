#include <cassert>
#include "QueryProcessor.h"
int main(){QueryProcessor q;auto r=q.search({},"alpha,alpha");assert(r.empty());return 0;}
