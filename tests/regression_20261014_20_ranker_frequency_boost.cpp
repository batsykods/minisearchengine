#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); i.addDocument(2, {"alpha","alpha"}); Ranker r; auto v=r.tfidf(i, {"alpha"}); assert(v.size()==2 && v[0].documentId==2 && v[0].score>v[1].score);
    return 0;
}
