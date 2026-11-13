#include <cassert>
#include <cmath>
#include <vector>
#include "BM25Ranker.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"needle"});
    index.addDocument(2, {"needle", "a", "b", "c"});
    index.addDocument(3, {});

    BM25Ranker ranker;
    const auto unnormalized = ranker.rank(index, {"needle"}, 1.2, 0.0);
    assert(unnormalized.size() == 2);
    assert(std::abs(unnormalized[0].score - unnormalized[1].score) < 1e-12);

    const auto normalized = ranker.rank(index, {"needle"}, 1.2, 1.0);
    assert(normalized.size() == 2);
    assert(normalized.front().documentId == 1);
    assert(normalized.front().score > normalized.back().score);

    const auto zeroK1 = ranker.rank(index, {"needle"}, 0.0, 0.75);
    assert(zeroK1.size() == 2);
    for (const auto& result : zeroK1) {
        assert(std::isfinite(result.score));
        assert(result.score > 0.0);
    }
    assert(ranker.rank(index, {"absent"}).empty());
    assert(ranker.rank(index, {}).empty());
    return 0;
}
