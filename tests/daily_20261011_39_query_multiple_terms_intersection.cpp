#include "QueryProcessor.h"
#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"a","b","c"}); i.addDocument(2,{"a","b"}); i.addDocument(3,{"a","c"}); QueryProcessor q; assert(q.search(i,"a b c")==std::vector<int>{1});
    return 0;
}
