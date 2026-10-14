#include <cassert>
#include <vector>
#include "SearchResult.h"
#include "TopK.h"
int main(){ TopK t; auto r=t.select({{8,1.0},{4,1.0},{2,1.0}},3); assert(r[0].documentId==2 && r[1].documentId==4 && r[2].documentId==8); }
