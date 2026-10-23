#include <cassert>
#include <vector>
#include "TopK.h"
#include "SearchResult.h"

int main() {
    TopK top;
    std::vector<SearchResult> input{{2, 1.0}, {1, 2.0}}; top.select(input, 1); assert(input.size() == 2 && input[0].documentId == 2);
    return 0;
}
