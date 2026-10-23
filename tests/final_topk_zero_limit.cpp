#include <cassert>
#include <vector>
#include "TopK.h"
#include "SearchResult.h"

int main() {
    TopK top;
    std::vector<SearchResult> input{{1, 3.0}, {2, 2.0}}; assert(top.select(input, 0).empty());
    return 0;
}
