#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(1, {"alpha"}); index.addDocument(2, {"alpha"}); Ranker ranker; auto a = ranker.tfidf(index, {"alpha"}); auto b = ranker.tfidf(index, {"alpha", "alpha"}); assert(a.size() == b.size()); for (std::size_t i = 0; i < a.size(); ++i) assert(a[i].score == b[i].score);
    return 0;
}
