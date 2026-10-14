#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "QueryProcessor.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); QueryProcessor q; assert(q.search(i, "!!! ???").empty());
    return 0;
}
