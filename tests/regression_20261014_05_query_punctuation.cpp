#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "QueryProcessor.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); QueryProcessor q; auto r=q.search(i, "alpha!!!"); assert(r.size()==1 && r[0]==1);
    return 0;
}
