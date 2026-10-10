#include "TopK.h"
#include <cassert>
int main(){ TopK t; auto v=t.select({{9,1.0},{3,1.0},{5,1.0}},2); assert(v.size()==2 && v[0].documentId==3 && v[1].documentId==5); }