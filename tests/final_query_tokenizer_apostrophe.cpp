#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer;
    std::vector<std::string> got = tokenizer.tokenize("don't"); assert((got == std::vector<std::string>{"don", "t"}));
    return 0;
}
