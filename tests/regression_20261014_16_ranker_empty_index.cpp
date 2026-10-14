#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"
int main() {
    InvertedIndex i; Ranker r; assert(r.tfidf(i, {"alpha"}).empty());
    return 0;
}
