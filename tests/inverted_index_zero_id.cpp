#include "InvertedIndex.h"
#include <cassert>

int main() {
    InvertedIndex index;
    index.addDocument(0, {"zero"});
    assert(index.contains("zero"));
    assert(index.search("zero").size() == 1);
    assert(index.search("zero").front() == 0);
    return 0;
}
