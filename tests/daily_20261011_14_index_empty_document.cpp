#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    InvertedIndex i; i.addDocument(1, {}); assert(i.documentCount()==1 && i.termCount()==0);
    return 0;
}
