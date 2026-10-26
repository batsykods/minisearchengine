#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "QueryProcessor.h"

int main() {
    QueryProcessor processor; InvertedIndex index; index.addDocument(1, {"alpha", "beta"}); index.addDocument(2, {"alpha"}); assert((processor.search(index, "alpha beta") == std::vector<int>{1}));
    return 0;
}
