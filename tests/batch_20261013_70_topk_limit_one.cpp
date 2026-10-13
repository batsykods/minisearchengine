#include <cassert>
#include "SearchResult.h"
#include <vector>
#include "TopK.h"
int main() {
    TopK t; auto r=t.select({{1,1.0},{2,4.0}},1); assert(r.size()==1 && r[0].documentId==2);
    return 0;
}
