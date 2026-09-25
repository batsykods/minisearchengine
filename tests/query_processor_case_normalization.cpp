#include <cassert>
#include "QueryProcessor.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"search"});
    QueryProcessor processor;
    const auto result = processor.search(index, "SEARCH");
    assert((result == std::vector<int>{1}));
}
