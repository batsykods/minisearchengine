#include <cassert>
#include <vector>
#include "SearchResult.h"
#include "TopK.h"

int main() {
    TopK top; assert(top.select({}, 3).empty());
    return 0;
}
