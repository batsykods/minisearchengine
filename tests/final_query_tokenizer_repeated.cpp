#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer;
    std::vector<std::string> got = tokenizer.tokenize("echo echo echo"); assert(got.size() == 3 && got[0] == got[1] && got[1] == got[2]);
    return 0;
}
