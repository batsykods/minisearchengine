#include <cassert>
#include "SearchResult.h"
#include "TopK.h"
int main(){ TopK t; auto r=t.select({{1,1.0},{2,2.0},{3,3.0}},2); assert(r.size()==2 && r[0].documentId==3); }
