#include "TopK.h"
#include <cassert>
int main(){ TopK t; auto v=t.select({{2,1.0},{1,2.0}},5); assert(v.size()==2 && v[0].documentId==1); }