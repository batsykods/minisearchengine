#include <cassert>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index;
    Ranker ranker;
    InvertedIndex index; index.addDocument(1, {"alpha", "beta"}); index.addDocument(2, {"alpha"}); auto first = ranker.tfidf(index, {"alpha", "beta"}); auto second = ranker.tfidf(index, {"beta", "alpha"}); assert(first.size() == second.size()); for (std::size_t i = 0; i < first.size(); ++i) assert(first[i].documentId == second[i].documentId && first[i].score == second[i].score);
    return 0;
}
