#include <cassert>
#include "SearchResult.h"
#include "TopK.h"
int main(){ TopK t; auto r=t.select({{1,-2.0},{2,-1.0}},1); assert(r.size()==1 && r[0].documentId==2); }
