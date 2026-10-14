#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"Alpha"}); assert(i.contains("Alpha") && !i.contains("alpha"));
    return 0;
}
