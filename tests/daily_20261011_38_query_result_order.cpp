#include "QueryProcessor.h"
#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(8,{"alpha"}); i.addDocument(2,{"alpha"}); QueryProcessor q; assert((q.search(i,"alpha")==std::vector<int>{2,8}));
    return 0;
}
