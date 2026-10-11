#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; assert((t.tokenize("123 456") == std::vector<std::string>{"123","456"}));
    return 0;
}
