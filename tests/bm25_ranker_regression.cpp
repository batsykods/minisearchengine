#include <cassert>
#include <cmath>
#include "BM25Ranker.h"

int main() {
    BM25Ranker ranker;
    InvertedIndex index;
    index.addDocument(8, {"alpha", "beta"});
    index.addDocument(3, {"alpha", "beta"});
    index.addDocument(5, {"alpha", "beta"});

    const auto ordered = ranker.rank(index, {"alpha"});
    assert(ordered.size() == 3);
    assert(ordered[0].documentId == 3);
    assert(ordered[1].documentId == 5);
    assert(ordered[2].documentId == 8);
    assert(ordered[0].score > 0.0);
    assert(std::abs(ordered[0].score - ordered[1].score) < 1e-12);

    const auto duplicate = ranker.rank(index, {"alpha", "alpha"});
    assert(duplicate.size() == ordered.size());
    for (std::size_t i = 0; i < ordered.size(); ++i) {
        assert(duplicate[i].documentId == ordered[i].documentId);
        assert(std::abs(duplicate[i].score - ordered[i].score) < 1e-12);
    }

    assert(ranker.rank(index, {"alpha"}, -0.1, 0.75).empty());
    assert(ranker.rank(index, {"alpha"}, 1.2, 1.1).empty());
    assert(ranker.rank(index, {"alpha"}, 1.2, 0.75).size() == 3);
    return 0;
}
