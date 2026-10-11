#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; assert((t.tokenize("!!!alpha???") == std::vector<std::string>{"alpha"}));
    return 0;
}
