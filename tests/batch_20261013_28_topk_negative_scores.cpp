#include "TopK.h"
#include <cassert>
#include <vector>
int main() {
    TopK t; auto r=t.select({{1,-3.0},{2,-1.0}},2); assert(r[0].documentId==2);
    return 0;
}
