#include "Tokenizer.h"
#include <cassert>
#include <string>
#include <vector>

int main() {
    Tokenizer tokenizer;
    assert((tokenizer.tokenize("abc123 456def") == std::vector<std::string>{"abc123", "456def"}));
    return 0;
}
