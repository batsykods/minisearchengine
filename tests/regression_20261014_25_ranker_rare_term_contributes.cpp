#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"common","rare"}); i.addDocument(2, {"common"}); Ranker r; auto v=r.tfidf(i, {"common","rare"}); assert(v.size()==2 && v[0].documentId==1);
    return 0;
}
