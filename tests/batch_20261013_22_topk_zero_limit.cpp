#include "TopK.h"
#include <cassert>
#include <vector>
int main() {
    TopK t; assert(t.select({{1,2.0}},0).empty());
    return 0;
}
