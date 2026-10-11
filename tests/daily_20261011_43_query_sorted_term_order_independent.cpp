#include "QueryProcessor.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"alpha","beta"}); QueryProcessor q; assert(q.search(i,"beta alpha")==std::vector<int>{1});
    return 0;
}
