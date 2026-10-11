#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; assert((t.tokenize("one,two;three:four") == std::vector<std::string>{"one","two","three","four"}));
    return 0;
}
