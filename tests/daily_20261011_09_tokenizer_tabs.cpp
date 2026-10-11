#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; assert((t.tokenize("alpha\tbeta") == std::vector<std::string>{"alpha","beta"}));
    return 0;
}
