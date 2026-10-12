#include "TopK.h"
#include <cassert>
#include <vector>
int main() {
    TopK t; auto r=t.select({{1,1.0},{1,2.0}},2); assert(r.size()==2 && r[0].score==2.0);
    return 0;
}
