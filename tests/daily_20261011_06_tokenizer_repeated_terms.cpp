#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; assert((t.tokenize("echo echo echo") == std::vector<std::string>{"echo","echo","echo"}));
    return 0;
}
