#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; assert((t.tokenize("alpha\nbeta\ngamma") == std::vector<std::string>{"alpha","beta","gamma"}));
    return 0;
}
