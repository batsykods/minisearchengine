#include <cassert>
#include "QueryProcessor.h"
int main(){QueryProcessor q;auto r=q.search({},"alpha beta gamma delta");assert(r.empty());return 0;}
