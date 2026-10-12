#include "TopK.h"
#include <cassert>
#include <vector>
int main() {
    TopK t; auto r=t.select({{9,1.0},{2,1.0}},2); assert(r[0].documentId==2 && r[1].documentId==9);
    return 0;
}
