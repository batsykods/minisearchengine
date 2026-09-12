#include "Tokenizer.h"

#include <cassert>
#include <vector>
#include <string>

int main() {
    const Tokenizer tokenizer;
    const auto tokens = tokenizer.tokenize("version 2.0 build 17");

    assert((tokens == std::vector<std::string>{"version", "2", "0", "build", "17"}));
    return 0;
}
