#include <cassert>
#include "QueryProcessor.h"
int main(){QueryProcessor q;auto a=q.search({},"alpha alpha");auto b=q.search({},"alpha");assert(a==b);return 0;}
