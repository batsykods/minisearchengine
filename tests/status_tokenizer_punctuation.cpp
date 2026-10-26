#include <cassert>
#include <string>
#include <vector>
#include "Tokenizer.h"

int main() {
    Tokenizer tokenizer; assert((tokenizer.tokenize("one,two.three") == std::vector<std::string>{"one", "two", "three"}));
    return 0;
}
