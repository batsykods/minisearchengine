#include <cassert>
#include "SearchResult.h"
#include <vector>
#include "TopK.h"
int main() {
    TopK t; auto r=t.select({{2,0.0},{1,0.0}},2); assert(r[0].documentId==1);
    return 0;
}
