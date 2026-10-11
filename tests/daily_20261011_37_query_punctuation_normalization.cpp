#include "QueryProcessor.h"
#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"alpha"}); QueryProcessor q; assert(q.search(i,"(alpha!)")==std::vector<int>{1});
    return 0;
}
