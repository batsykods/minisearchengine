#include "QueryProcessor.h"
#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"alpha"}); QueryProcessor q; assert(q.search(i," \t ").empty());
    return 0;
}
