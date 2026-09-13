#include "Tokenizer.h"

#include <cassert>
#include <string>
#include <vector>

int main() {
    const Tokenizer tokenizer;
    const std::vector<std::string> tokens = tokenizer.tokenize("   alpha\t\tbeta\n gamma   ");

    assert((tokens == std::vector<std::string>{"alpha", "beta", "gamma"}));
    return 0;
}
