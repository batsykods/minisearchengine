#include <cassert>
#include "QueryProcessor.h"

int main() {
    InvertedIndex index;
    QueryProcessor processor;
    assert(processor.search(index, "nonexistentterm").empty());
}
