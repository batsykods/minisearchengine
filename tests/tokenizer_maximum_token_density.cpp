#include "Tokenizer.h"

#include <cassert>
#include <string>

int main() {
    const Tokenizer tokenizer;
    std::string input;
    input.reserve(1999);
    for (int i = 0; i < 1000; ++i) {
        input += "a ";
    }

    const auto tokens = tokenizer.tokenize(input);
    assert(tokens.size() == 1000);
    for (const auto& token : tokens) {
        assert(token == "a");
    }
    return 0;
}
