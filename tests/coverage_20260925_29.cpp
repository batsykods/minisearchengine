#include <cassert>
#include "QueryProcessor.h"
int main(){QueryProcessor q;auto a=q.search({},"beta alpha");auto b=q.search({},"alpha beta");assert(a==b);return 0;}
