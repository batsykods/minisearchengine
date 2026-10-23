#include <cassert>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index;
    Ranker ranker;
    InvertedIndex index; index.addDocument(1, {"alpha", "alpha", "alpha"}); auto got = ranker.tfidf(index, {"alpha"}); assert(got.size() == 1 && got[0].score > 0.0);
    return 0;
}
