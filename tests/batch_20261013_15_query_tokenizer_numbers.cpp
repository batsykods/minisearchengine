#include "QueryTokenizer.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    QueryTokenizer t; assert((t.tokenize("abc 123")==std::vector<std::string>{"abc","123"}));
    return 0;
}
