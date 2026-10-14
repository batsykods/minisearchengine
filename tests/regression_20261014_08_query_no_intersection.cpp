#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "QueryProcessor.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); i.addDocument(2, {"beta"}); QueryProcessor q; assert(q.search(i, "alpha beta").empty());
    return 0;
}
