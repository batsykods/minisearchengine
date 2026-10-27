#include <cassert>
#include <cmath>
#include <limits>
#include <string>
#include <vector>
#include <vector>
#include "InvertedIndex.h"
#include "BM25Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(9, {"alpha"}); index.addDocument(2, {"alpha"}); BM25Ranker ranker; auto results = ranker.rank(index, {"alpha"}); assert(results.size() == 2); assert(results[0].documentId == 2); assert(results[1].documentId == 9);
    return 0;
}
