#include "Tokenizer.h"

#include <cassert>
#include <string>
#include <vector>

int main() {
    const Tokenizer tokenizer;

    const std::vector<std::string> tokens = tokenizer.tokenize(
        "C++ Search, ENGINE! 2026 -- fast-search."
    );

    assert((tokens == std::vector<std::string>{"c", "search", "engine", "2026", "fast", "search"}));
    assert(tokenizer.tokenize("!!! ... ---").empty());
    assert((tokenizer.tokenize("MiXeD CaSe") == std::vector<std::string>{"mixed", "case"}));

    return 0;
}
