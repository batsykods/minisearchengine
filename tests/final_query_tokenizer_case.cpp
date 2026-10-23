#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer;
    std::vector<std::string> got = tokenizer.tokenize("C++ SEARCH Engine"); assert((got == std::vector<std::string>{"c", "search", "engine"}));
    return 0;
}
