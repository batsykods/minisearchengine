#include "TopK.h"
#include <cassert>
#include <vector>
int main() {
    TopK t; auto r=t.select({{2,1.0},{1,3.0}},1); assert(r.size()==1 && r[0].documentId==1);
    return 0;
}
