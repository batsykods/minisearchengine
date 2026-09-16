#include <cassert>
#include <string>
#include <vector>
#include "QueryProcessor.h"

int main() {
    InvertedIndex index;
    QueryProcessor processor;
    const std::vector<int> result = processor.search(index, "");
    assert(result.empty());
}
