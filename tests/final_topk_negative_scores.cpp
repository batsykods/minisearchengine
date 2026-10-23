#include <cassert>
#include <vector>
#include "TopK.h"
#include "SearchResult.h"

int main() {
    TopK top;
    auto got = top.select({{1, -5.0}, {2, -1.0}, {3, -3.0}}, 2); assert(got.size() == 2 && got[0].documentId == 2 && got[1].documentId == 3);
    return 0;
}
