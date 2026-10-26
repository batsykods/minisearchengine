#include <cassert>
#include <string>
#include <vector>
#include "Tokenizer.h"

int main() {
    Tokenizer tokenizer; assert((tokenizer.tokenize("HELLO World") == std::vector<std::string>{"hello", "world"}));
    return 0;
}
