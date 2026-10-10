#include "TopK.h"
#include <cassert>
int main(){ TopK t; auto r=t.select({{1,1.0}},0); assert(r.empty()); }