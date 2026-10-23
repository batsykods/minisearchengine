#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer;
    std::vector<std::string> got = tokenizer.tokenize("IPv6 2026 v2"); assert((got == std::vector<std::string>{"ipv", "6", "2026", "v2"}));
    return 0;
}
