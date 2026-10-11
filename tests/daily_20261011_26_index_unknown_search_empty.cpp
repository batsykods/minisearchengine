#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    InvertedIndex i; assert(i.search("unknown").empty() && !i.contains("unknown"));
    return 0;
}
