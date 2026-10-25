#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"a"}); const auto before = index.termCount(); index.search("absent"); assert(index.termCount() == before);
    return 0;
}
