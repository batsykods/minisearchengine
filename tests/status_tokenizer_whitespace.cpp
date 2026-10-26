#include <cassert>
#include <string>
#include <vector>
#include "Tokenizer.h"

int main() {
    Tokenizer tokenizer; assert((tokenizer.tokenize("  alpha\t beta\n") == std::vector<std::string>{"alpha", "beta"}));
    return 0;
}
