#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha","beta"}); Ranker r; auto v=r.tfidf(i, {"alpha","beta"}); assert(v.size()==1 && v[0].score>0.0);
    return 0;
}
