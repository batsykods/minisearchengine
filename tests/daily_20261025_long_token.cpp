#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {std::string(512, 'x')}); assert(index.contains(std::string(512, 'x')));
    return 0;
}
