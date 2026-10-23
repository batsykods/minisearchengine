#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer;
    std::vector<std::string> got = tokenizer.tokenize("path/to-file"); assert((got == std::vector<std::string>{"path", "to", "file"}));
    return 0;
}
