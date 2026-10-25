#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex index;
    std::vector<std::string> terms; for (int i = 0; i < 100; ++i) terms.push_back("t" + std::to_string(i)); index.addDocument(1, terms); assert(index.termCount() == 100);
    return 0;
}
