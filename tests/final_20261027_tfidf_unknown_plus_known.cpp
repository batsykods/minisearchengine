#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(7, {"alpha"}); Ranker ranker; auto results = ranker.tfidf(index, {"missing", "alpha"}); assert(results.size() == 1); assert(results[0].documentId == 7);
    return 0;
}
