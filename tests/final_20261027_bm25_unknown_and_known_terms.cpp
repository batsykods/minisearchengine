#include <cassert>
#include <cmath>
#include <limits>
#include <string>
#include <vector>
#include <vector>
#include "InvertedIndex.h"
#include "BM25Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(1, {"alpha"}); BM25Ranker ranker; auto results = ranker.rank(index, {"missing", "alpha"}); assert(results.size() == 1); assert(results[0].documentId == 1);
    return 0;
}
