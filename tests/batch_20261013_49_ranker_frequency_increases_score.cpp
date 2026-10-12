#include "Ranker.h"
#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "SearchResult.h"

int main() {
    InvertedIndex i; i.addDocument(1,{"x","x"}); i.addDocument(2,{"x"}); Ranker r; auto v=r.tfidf(i,{"x"}); assert(v.size()==2 && v[0].documentId==1);
    return 0;
}
