#include <cassert>
#include <vector>
#include <string>
#include "InvertedIndex.h"
int main() {
    InvertedIndex i; assert(!i.contains("missing") && i.search("missing").empty());
    return 0;
}
