#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"
int main() {
    InvertedIndex i; i.addDocument(9, {"alpha"}); i.addDocument(2, {"alpha"}); Ranker r; auto v=r.tfidf(i, {"alpha"}); assert(v.size()==2 && v[0].documentId==2 && v[1].documentId==9);
    return 0;
}
