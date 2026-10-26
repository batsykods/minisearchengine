#include <cassert>
#include <vector>
#include "SearchResult.h"
#include "TopK.h"

int main() {
    TopK top; assert(top.select({{1, 1.0}, {2, 2.0}}, 0).empty());
    return 0;
}
