#include "QueryProcessor.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; for(int n=1;n<=20;++n)i.addDocument(n,{"shared","term"}); QueryProcessor q; assert(q.search(i,"shared term").size()==20);
    return 0;
}
