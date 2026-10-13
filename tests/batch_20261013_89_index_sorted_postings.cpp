#include <cassert>
#include <vector>
#include <string>
#include "InvertedIndex.h"
int main() {
    InvertedIndex i; i.addDocument(9, {"x"}); i.addDocument(2, {"x"}); auto p=i.search("x"); assert(p.size()==2 && p[0]==2 && p[1]==9);
    return 0;
}
