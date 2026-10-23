#include <cassert>
#include <vector>
#include "TopK.h"
#include "SearchResult.h"

int main() {
    TopK top;
    auto got = top.select({{3, 1.0}, {2, 2.0}, {1, 3.0}}, 3); assert(got.size() == 3 && got[0].documentId == 1);
    return 0;
}
