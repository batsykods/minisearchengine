#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer; assert((tokenizer.tokenize("HELLO WORLD") == std::vector<std::string>{"hello", "world"}));
    return 0;
}
