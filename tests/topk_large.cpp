#include <cassert>
#include "TopK.h"
int main(){TopK t; auto x=t.select({{1,1.0}},5); assert(x.size()==1);}
