#include "Ranker.h"
#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "SearchResult.h"

int main() {
    InvertedIndex i; i.addDocument(1,{"x"}); Ranker r; assert(r.tfidf(i,{"missing"}).empty());
    return 0;
}
