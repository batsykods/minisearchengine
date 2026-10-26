#include <cassert>
#include <vector>
#include "SearchResult.h"
#include "TopK.h"

int main() {
    TopK top; auto results = top.select({{9, 1.0}, {2, 1.0}}, 2); assert(results[0].documentId == 2);
    return 0;
}
