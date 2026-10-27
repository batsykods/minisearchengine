#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(1, {"alpha"}); index.addDocument(2, {"beta"}); Ranker ranker; auto results = ranker.tfidf(index, {"alpha"}); assert(results.size() == 1); assert(results[0].documentId == 1);
    return 0;
}
