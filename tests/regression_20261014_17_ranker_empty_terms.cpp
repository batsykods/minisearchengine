#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); Ranker r; assert(r.tfidf(i, {}).empty());
    return 0;
}
