#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer; assert((tokenizer.tokenize("alpha,beta.gamma") == std::vector<std::string>{"alpha", "beta", "gamma"}));
    return 0;
}
