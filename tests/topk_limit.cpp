#include <cassert>
#include "TopK.h"
int main(){TopK t; auto x=t.select({{3,1.0},{1,3.0},{2,2.0}},2); assert(x.size()==2); assert(x[0].documentId==1); assert(x[1].documentId==2);}
