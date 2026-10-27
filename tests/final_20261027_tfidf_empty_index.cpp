#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index; Ranker ranker; assert(ranker.tfidf(index, {"alpha"}).empty());
    return 0;
}
