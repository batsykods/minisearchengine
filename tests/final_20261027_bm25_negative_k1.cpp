#include <cassert>
#include <cmath>
#include <limits>
#include <string>
#include <vector>
#include <vector>
#include "InvertedIndex.h"
#include "BM25Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(1, {"alpha"}); BM25Ranker ranker; assert(ranker.rank(index, {"alpha"}, -0.1, 0.75).empty());
    return 0;
}
