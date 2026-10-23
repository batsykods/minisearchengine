#include <cassert>
#include <vector>
#include "TopK.h"
#include "SearchResult.h"

int main() {
    TopK top;
    assert(top.select({}, 5).empty());
    return 0;
}
