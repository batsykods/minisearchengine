#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "QueryProcessor.h"

int main() {
    QueryProcessor processor; InvertedIndex index; index.addDocument(1, {"alpha", "beta"}); assert((processor.search(index, "alpha alpha beta") == std::vector<int>{1}));
    return 0;
}
