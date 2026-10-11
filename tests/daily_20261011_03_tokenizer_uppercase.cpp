#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; assert((t.tokenize("SEARCH ENGINE") == std::vector<std::string>{"search","engine"}));
    return 0;
}
