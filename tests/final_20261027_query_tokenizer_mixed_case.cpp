#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer; assert((tokenizer.tokenize("MiXeD CaSe") == std::vector<std::string>{"mixed", "case"}));
    return 0;
}
