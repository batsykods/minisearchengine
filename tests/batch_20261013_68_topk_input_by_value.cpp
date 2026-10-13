#include <cassert>
#include "SearchResult.h"
#include <vector>
#include "TopK.h"
int main() {
    TopK t; std::vector<SearchResult> input{{2,1.0},{1,2.0}}; t.select(input,1); assert(input[0].documentId==2);
    return 0;
}
