#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"

int main() {
    InvertedIndex index; index.addDocument(1, {"alpha"}); Ranker ranker; assert(ranker.tfidf(index, {}).empty());
    return 0;
}
