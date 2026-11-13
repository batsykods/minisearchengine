#include <cassert>
#include "IndexStats.h"

int main() {
    InvertedIndex index;
    auto stats = collectIndexStats(index);
    assert(stats.documents == 0);
    assert(stats.terms == 0);

    index.addDocument(7, {"alpha", "beta", "alpha"});
    stats = collectIndexStats(index);
    assert(stats.documents == 1);
    assert(stats.terms == 2);

    index.addDocument(3, {"beta", "gamma"});
    stats = collectIndexStats(index);
    assert(stats.documents == 2);
    assert(stats.terms == 3);
    return 0;
}
