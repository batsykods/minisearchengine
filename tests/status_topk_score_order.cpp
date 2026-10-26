#include <cassert>
#include <vector>
#include "SearchResult.h"
#include "TopK.h"

int main() {
    TopK top; auto results = top.select({{1, 1.0}, {2, 3.0}, {3, 2.0}}, 3); assert(results[0].documentId == 2); assert(results[1].documentId == 3);
    return 0;
}
