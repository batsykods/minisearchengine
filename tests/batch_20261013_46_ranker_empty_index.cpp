#include "Ranker.h"
#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "SearchResult.h"

int main() {
    InvertedIndex i; Ranker r; assert(r.tfidf(i,{"x"}).empty());
    return 0;
}
