#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer;
    std::vector<std::string> got = tokenizer.tokenize("ASCII café"); assert(!got.empty() && got.front() == "ascii");
    return 0;
}
