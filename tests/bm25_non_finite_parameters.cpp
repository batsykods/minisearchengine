#include <cassert>
#include <cmath>
#include <limits>
#include "BM25Ranker.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"search", "engine"});
    BM25Ranker ranker;

    assert(ranker.rank(index, {"search"}, std::numeric_limits<double>::quiet_NaN(), 0.75).empty());
    assert(ranker.rank(index, {"search"}, 1.2, std::numeric_limits<double>::quiet_NaN()).empty());
    assert(ranker.rank(index, {"search"}, std::numeric_limits<double>::infinity(), 0.75).empty());
    assert(ranker.rank(index, {"search"}, 1.2, -std::numeric_limits<double>::infinity()).empty());
    return 0;
}
