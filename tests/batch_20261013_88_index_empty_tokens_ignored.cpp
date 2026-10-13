#include <cassert>
#include <vector>
#include <string>
#include "InvertedIndex.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"", "alpha"}); assert(i.termCount()==1 && i.contains("alpha"));
    return 0;
}
