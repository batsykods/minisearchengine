#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "QueryProcessor.h"

int main() {
    QueryProcessor processor; InvertedIndex index; index.addDocument(1, {"hello", "world"}); assert((processor.search(index, "HELLO") == std::vector<int>{1}));
    return 0;
}
