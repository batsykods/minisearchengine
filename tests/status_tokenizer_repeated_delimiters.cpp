#include <cassert>
#include <string>
#include <vector>
#include "Tokenizer.h"

int main() {
    Tokenizer tokenizer; assert((tokenizer.tokenize("a---b___c") == std::vector<std::string>{"a", "b", "c"}));
    return 0;
}
