#include <cassert>
#include <vector>
#include "TopK.h"
#include "SearchResult.h"

int main() {
    TopK top;
    auto got = top.select({{9, 2.0}, {3, 2.0}, {5, 2.0}}, 3); assert(got[0].documentId == 3 && got[1].documentId == 5 && got[2].documentId == 9);
    return 0;
}
