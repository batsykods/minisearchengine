#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; for(int n=1;n<=30;++n)i.addDocument(n,{"common"}); assert(i.documentFrequency("common")==30 && i.search("common").size()==30);
    return 0;
}
