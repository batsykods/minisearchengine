#include <cassert>
#include <cmath>
#include <limits>
#include <string>
#include <vector>
#include <vector>
#include "InvertedIndex.h"
#include "BM25Ranker.h"

int main() {
    InvertedIndex index; BM25Ranker ranker; assert(ranker.rank(index, {"alpha"}).empty());
    return 0;
}
