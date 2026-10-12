#include "TopK.h"
#include <cassert>
#include <vector>
int main() {
    TopK t; auto r=t.select({{2,1.0},{1,3.0},{3,2.0}},3); assert(r[0].score==3.0 && r[1].score==2.0 && r[2].score==1.0);
    return 0;
}
