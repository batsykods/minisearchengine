#include "TopK.h"
#include <cassert>
#include <vector>
int main() {
    TopK t; auto r=t.select({{4,0.0},{3,0.0}},2); assert(r[0].documentId==3);
    return 0;
}
