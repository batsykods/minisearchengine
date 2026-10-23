#include <cassert>
#include <vector>
#include "TopK.h"
#include "SearchResult.h"

int main() {
    TopK top;
    auto got = top.select({{4, 0.25}}, 1); assert(got.size() == 1 && got[0].documentId == 4);
    return 0;
}
