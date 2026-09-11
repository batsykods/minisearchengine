#include <cassert>
#include <string>
#include <vector>
#include "Tokenizer.h"

int main() {
    Tokenizer tokenizer;
    const std::vector<std::string> tokens = tokenizer.tokenize("C++ Search, ENGINE!");

    assert(tokens.size() == 3);
    assert(tokens[0] == "c");
    assert(tokens[1] == "search");
    assert(tokens[2] == "engine");

    return 0;
}
