#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "QueryProcessor.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha","beta"}); QueryProcessor q; assert(q.search(i, "ALPHA, BeTa!").size()==1);
    return 0;
}
