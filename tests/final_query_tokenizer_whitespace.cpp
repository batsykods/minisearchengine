#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer;
    std::vector<std::string> got = tokenizer.tokenize("  alpha\t beta\n gamma  "); assert((got == std::vector<std::string>{"alpha", "beta", "gamma"}));
    return 0;
}
