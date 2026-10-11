#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; i.addDocument(1,{"a","a","a"}); assert(i.search("a").size()==1);
    return 0;
}
