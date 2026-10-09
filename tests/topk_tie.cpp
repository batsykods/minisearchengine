#include <cassert>
#include "TopK.h"
int main(){TopK t; auto x=t.select({{4,1.0},{2,1.0}},2); assert(x[0].documentId==2);}