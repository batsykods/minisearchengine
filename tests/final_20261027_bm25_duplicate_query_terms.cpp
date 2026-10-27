#include <cassert>
#include <cmath>
#include <limits>
#include <string>
#include <vector>
#include <vector>
#include "InvertedIndex.h"
#include "BM25Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(1, {"alpha", "alpha"}); index.addDocument(2, {"alpha"}); BM25Ranker ranker; auto a = ranker.rank(index, {"alpha"}); auto b = ranker.rank(index, {"alpha", "alpha"}); assert(a.size() == b.size()); for (std::size_t i = 0; i < a.size(); ++i) assert(a[i].score == b[i].score);
    return 0;
}
