#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main() {
    InvertedIndex i; i.addDocument(0, {"alpha"}); assert(i.search("alpha").size()==1 && i.documentCount()==1);
    return 0;
}
