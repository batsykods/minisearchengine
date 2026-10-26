#include <cassert>
#include <string>
#include <vector>
#include "Tokenizer.h"

int main() {
    Tokenizer tokenizer; assert((tokenizer.tokenize("Search") == std::vector<std::string>{"search"}));
    return 0;
}
