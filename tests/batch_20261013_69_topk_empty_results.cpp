#include <cassert>
#include "SearchResult.h"
#include <vector>
#include "TopK.h"
int main() {
    TopK t; assert(t.select({},10).empty());
    return 0;
}
