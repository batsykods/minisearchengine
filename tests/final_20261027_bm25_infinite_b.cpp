#include <cassert>
#include <cmath>
#include <limits>
#include <string>
#include <vector>
#include <limits>
#include <vector>
#include "InvertedIndex.h"
#include "BM25Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(1, {"alpha"}); BM25Ranker ranker; assert(ranker.rank(index, {"alpha"}, 1.2, std::numeric_limits<double>::infinity()).empty());
    return 0;
}
