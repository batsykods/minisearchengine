#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    const Tokenizer tokenizer;
    const auto tokens = tokenizer.tokenize("Compiler");
    assert(tokens.size() == 1);
    assert(tokens.front() == "compiler");
    return 0;
}
