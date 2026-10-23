#include <cassert>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index;
    Ranker ranker;
    InvertedIndex index; index.addDocument(1, {"alpha", "beta"}); auto got = ranker.tfidf(index, {"alpha", "beta"}); assert(got.size() == 1);
    return 0;
}
