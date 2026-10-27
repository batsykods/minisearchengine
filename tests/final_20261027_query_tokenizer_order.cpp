#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer; assert((tokenizer.tokenize("zebra apple mango") == std::vector<std::string>{"zebra", "apple", "mango"}));
    return 0;
}
