#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main() {
    InvertedIndex i; i.addDocument(-4, {"alpha"}); auto p=i.search("alpha"); assert(p.size()==1 && p[0]==-4);
    return 0;
}
