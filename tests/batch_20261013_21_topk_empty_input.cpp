#include "TopK.h"
#include <cassert>
#include <vector>
int main() {
    TopK t; assert(t.select({},3).empty());
    return 0;
}
