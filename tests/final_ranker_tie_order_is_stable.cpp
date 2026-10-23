#include <cassert>
#include <cstddef>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index;
    Ranker ranker;
    InvertedIndex index; index.addDocument(8, {"alpha"}); index.addDocument(3, {"alpha"}); auto got = ranker.tfidf(index, {"alpha"}); assert(got.size() == 2 && got[0].documentId == 3 && got[1].documentId == 8);
    return 0;
}
