#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); Ranker r; auto v=r.tfidf(i, {"alpha","missing"}); assert(v.size()==1 && v[0].documentId==1);
    return 0;
}
