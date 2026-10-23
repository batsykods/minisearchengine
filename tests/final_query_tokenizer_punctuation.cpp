#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer;
    std::vector<std::string> got = tokenizer.tokenize("foo-bar"); assert((got == std::vector<std::string>{"foo", "bar"}));
    return 0;
}
