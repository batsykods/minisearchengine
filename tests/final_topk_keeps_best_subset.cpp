#include <cassert>
#include <vector>
#include "TopK.h"
#include "SearchResult.h"

int main() {
    TopK top;
    auto got = top.select({{1, 1.0}, {2, 8.0}, {3, 4.0}, {4, 2.0}}, 2); assert(got.size() == 2 && got[0].documentId == 2 && got[1].documentId == 3);
    return 0;
}
