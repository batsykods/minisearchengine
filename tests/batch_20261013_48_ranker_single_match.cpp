#include "Ranker.h"
#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "SearchResult.h"

int main() {
    InvertedIndex i; i.addDocument(1,{"x"}); Ranker r; auto v=r.tfidf(i,{"x"}); assert(v.size()==1 && v[0].documentId==1 && v[0].score>0.0);
    return 0;
}
