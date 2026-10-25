#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    assert(index.documentLength(404) == 0);
    return 0;
}
