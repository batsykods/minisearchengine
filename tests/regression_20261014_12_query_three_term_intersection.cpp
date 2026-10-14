#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "QueryProcessor.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"a","b","c"}); i.addDocument(2, {"a","b"}); QueryProcessor q; auto r=q.search(i, "a b c"); assert(r.size()==1 && r[0]==1);
    return 0;
}
