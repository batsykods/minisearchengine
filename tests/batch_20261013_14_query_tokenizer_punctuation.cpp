#include "QueryTokenizer.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    QueryTokenizer t; assert((t.tokenize("(Hello!), world?")==std::vector<std::string>{"hello","world"}));
    return 0;
}
