#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "QueryProcessor.h"

int main() {
    QueryProcessor processor; InvertedIndex index; assert(processor.search(index, "").empty());
    return 0;
}
