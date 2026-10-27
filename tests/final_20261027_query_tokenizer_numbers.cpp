#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer; assert((tokenizer.tokenize("abc123 456") == std::vector<std::string>{"abc123", "456"}));
    return 0;
}
