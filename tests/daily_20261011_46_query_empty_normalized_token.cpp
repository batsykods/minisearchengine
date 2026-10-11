#include "QueryProcessor.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"alpha"}); QueryProcessor q; assert(q.search(i,"!!!").empty());
    return 0;
}
