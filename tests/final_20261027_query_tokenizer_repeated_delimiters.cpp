#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer; assert((tokenizer.tokenize("a---b___c") == std::vector<std::string>{"a", "b", "c"}));
    return 0;
}
