#include <cassert>
#include "TopK.h"
int main(){TopK t; auto x=t.select({{3,0.1},{1,5.0},{2,2.0}},3); assert(x[0].documentId==1);}