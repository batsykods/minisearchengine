#include <cassert>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index;
    Ranker ranker;
    InvertedIndex index; index.addDocument(1, {"alpha", "alpha"}); auto once = ranker.tfidf(index, {"alpha"}); auto repeated = ranker.tfidf(index, {"alpha", "alpha"}); assert(once.size() == 1 && repeated.size() == 1 && once[0].score == repeated[0].score);
    return 0;
}
