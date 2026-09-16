#include <cassert>
#include "QueryProcessor.h"

int main() {
    InvertedIndex index;
    QueryProcessor processor;
    const auto result = processor.search(index, "CPP");
    assert(result.empty());
}
