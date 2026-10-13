#include <cassert>
#include "SearchResult.h"
#include <vector>
#include "TopK.h"
int main() {
    TopK t; auto r=t.select({{9,2.0},{3,2.0}},2); assert(r[0].documentId==3 && r[1].documentId==9);
    return 0;
}
