#include "Tokenizer.h"

#include <cassert>
#include <vector>
#include <string>

int main() {
    const Tokenizer tokenizer;
    const std::vector<std::string> tokens = tokenizer.tokenize("C++ search-engine, indexing! 2026.");

    assert((tokens == std::vector<std::string>{"c", "search", "engine", "indexing", "2026"}));
    return 0;
}
