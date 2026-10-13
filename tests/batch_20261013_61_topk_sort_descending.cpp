#include <cassert>
#include "SearchResult.h"
#include <vector>
#include "TopK.h"
int main() {
    TopK t; auto r=t.select({{1,1.0},{2,3.0},{3,2.0}},3); assert(r[0].documentId==2 && r[1].documentId==3 && r[2].documentId==1);
    return 0;
}
