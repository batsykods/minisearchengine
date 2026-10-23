#include <cassert>
#include <vector>
#include "TopK.h"
#include "SearchResult.h"

int main() {
    TopK top;
    auto got = top.select({{2, 1.0}, {1, 2.0}}, 8); assert(got.size() == 2 && got[0].documentId == 1);
    return 0;
}
