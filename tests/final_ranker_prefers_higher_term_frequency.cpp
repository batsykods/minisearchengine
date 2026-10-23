#include <cassert>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index;
    Ranker ranker;
    InvertedIndex index; index.addDocument(1, {"alpha"}); index.addDocument(2, {"alpha", "alpha", "alpha"}); auto got = ranker.tfidf(index, {"alpha"}); assert(got.size() == 2 && got[0].documentId == 2);
    return 0;
}
