#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(1, {"alpha", "alpha", "alpha"}); index.addDocument(2, {"alpha"}); Ranker ranker; auto results = ranker.tfidf(index, {"alpha"}); assert(results.size() == 2); assert(results[0].documentId == 1);
    return 0;
}
