#include "TopK.h"
#include <cassert>
#include <vector>
int main() {
    TopK t; auto r=t.select({{1,1.0}},10); assert(r.size()==1);
    return 0;
}
