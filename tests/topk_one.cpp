#include <cassert>
#include "TopK.h"
int main(){TopK t; auto x=t.select({{7,2.0},{3,1.0}},1); assert(x.size()==1); assert(x[0].documentId==7);}