#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha","alpha","alpha"}); auto p=i.search("alpha"); assert(p.size()==1 && p[0]==1);
    return 0;
}
