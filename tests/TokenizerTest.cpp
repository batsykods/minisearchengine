#include <cassert>
#include <string>
#include <vector>
#include "Tokenizer.h"

int main() {
    Tokenizer tokenizer;

    const std::vector<std::string> expected = {
        "c", "is", "fast", "and", "powerful"
    };

    const auto actual = tokenizer.tokenize("C++ is fast, and powerful!");

    assert(actual == expected);
    return 0;
}
