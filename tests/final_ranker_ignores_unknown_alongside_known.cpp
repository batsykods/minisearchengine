#include <cassert>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index;
    Ranker ranker;
    InvertedIndex index; index.addDocument(1, {"alpha"}); auto got = ranker.tfidf(index, {"missing", "alpha"}); assert(got.size() == 1 && got[0].documentId == 1);
    return 0;
}
