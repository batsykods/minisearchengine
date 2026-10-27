#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(1, {"alpha", "beta", "gamma"}); Ranker ranker; auto results = ranker.tfidf(index, {"alpha", "beta", "gamma", "missing"}); assert(results.size() == 1); assert(results[0].score > 0.0);
    return 0;
}
