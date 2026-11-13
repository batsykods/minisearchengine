#include <cassert>
#include <cmath>
#include <limits>
#include "BM25Ranker.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"search"});
    index.addDocument(2, {"search", "engine", "ranking"});

    BM25Ranker ranker;
    const auto results = ranker.rank(index, {"search"}, std::numeric_limits<double>::max(), 1.0);

    assert(results.size() == 2);
    for (const auto& result : results) {
        assert(std::isfinite(result.score));
        assert(result.score > 0.0);
    }
    assert(results.front().documentId == 1);
    return 0;
}
