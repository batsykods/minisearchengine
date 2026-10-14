#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "QueryProcessor.h"
int main() {
    InvertedIndex i; i.addDocument(9, {"alpha"}); i.addDocument(2, {"alpha"}); QueryProcessor q; auto r=q.search(i, "alpha"); assert(r.size()==2 && r[0]==2 && r[1]==9);
    return 0;
}
