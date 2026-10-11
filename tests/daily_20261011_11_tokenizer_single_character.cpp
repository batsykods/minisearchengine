#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; assert((t.tokenize("a") == std::vector<std::string>{"a"}));
    return 0;
}
