#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "Ranker.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); Ranker r; auto a=r.tfidf(i, {"alpha"}); auto b=r.tfidf(i, {"alpha","alpha"}); assert(a.size()==1 && b.size()==1 && b[0].score>a[0].score);
    return 0;
}
