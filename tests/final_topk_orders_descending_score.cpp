#include <cassert>
#include <vector>
#include "TopK.h"
#include "SearchResult.h"

int main() {
    TopK top;
    auto got = top.select({{1, 1.0}, {2, 5.0}, {3, 2.0}}, 3); assert(got[0].score == 5.0 && got[1].score == 2.0 && got[2].score == 1.0);
    return 0;
}
